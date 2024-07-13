#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        map<pair<int,pair<int,int>>,int>mp;
        int count=0;
        for(int i=0;i<N-2;i++){
           count+=mp[{arr[i],{arr[i+1],0}}];  
           count+=mp[{arr[i],{0,arr[i+2]}}];  
           count+=mp[{0,{arr[i+1],arr[i+2]}}];  
           count-=3*mp[{arr[i],{arr[i+1],arr[i+2]}}];  
           mp[{arr[i],{arr[i+1],0}}]++;
           mp[{arr[i],{0,arr[i+2]}}]++;
           mp[{0,{arr[i+1],arr[i+2]}}]++;
           mp[{arr[i],{arr[i+1],arr[i+2]}}]++;
        }
        cout<<count<<endl;

        
 
    
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