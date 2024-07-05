#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod LLONG_MAX


void isham_function(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int temp=0;
    int maxx=INT_MIN;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        maxx=max(maxx,arr[i]);
    }
    vector<int>v(maxx+2,0);
    for(auto it:mp){
        v[it.first]=it.second;
    }
    for(int i=0;i<maxx+2;i++){
        if(v[i]==0){
            cout<<i<<endl;
            return;
        }else if(v[i]==1){
            if(temp==1){
                cout<<i<<endl;
                return;
            }else{
                temp++;
            }
        }
    }
    
}

int main(){
    //consider number of test cases
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}