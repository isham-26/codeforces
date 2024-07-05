#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int N;
        cin>>N;
        unordered_map<int,int>mp;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int maxi=0;
        int ans=0;
        for(auto x:mp){
           ans+=x.second/3;
        }
       cout<<ans<<endl;
    
        
 
    
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