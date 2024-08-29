#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void fill_arr(vector<int>&arr,int N){
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
}
void print_arr(int *arr,int N){
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void isham_function(){
        int N;
        cin>>N;
        vector<int>a(N);
        vector<int>b(N);
        fill_arr(a,N);
        fill_arr(b,N);
        bool cheak=(a==b);
        reverse(a.begin(),a.end());
        if(cheak || a==b){
            cout<<"Bob"<<endl;
            return;
        }
        
       
        cout<<"Alice"<<endl;
           
}
signed main(){
    //consider number of test cases
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}