#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> x(n,0);
        for(long long i=0;i<n;i++){
           cin>>x[i];
        }
        vector<long long> v;
        for(long long i=0;i<q;i++){
           long long temp; 
           cin>>temp;
           if(v.empty() || v.back()>temp){
             v.push_back(temp);
           }
        }
        for(int i=0;i<x.size();i++){
            for(auto &it: v){
                if(x[i]%(1<<it)==0){
                    x[i]|=(1<<it-1);
                }
            }
        }
        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    return 0;         
}