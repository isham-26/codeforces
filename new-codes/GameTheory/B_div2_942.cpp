#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void fill_arr(int *arr,int N){
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
        //int arr[N];
        //fill_arr(arr,N);
        string s;
        cin>>s;
        int count=0;
        for(auto x:s){
            if(x=='U'){
                count++;
            }
        }
        if(count%2==1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
           
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