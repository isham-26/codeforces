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
    for(int i=1;i<=N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void isham_function(){
        int N;
        cin>>N;
        int arr[N];
        fill_arr(arr,N);
        map<int,int>mp;
        for(int i=0;i<N;i++){
            mp[arr[i]]++;
        }
        vector<int>temp;
        for(auto x:mp){
            temp.push_back(x.first);
        }
        sort(temp.begin(),temp.end(),greater<int>());
        
        for(int i=0;i<temp.size();i++){
            
            if(mp[temp[i]]%2==1){
                cout<<"YES"<<endl;
                return;
            }
            
        }
        cout<<"NO"<<endl;

           
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