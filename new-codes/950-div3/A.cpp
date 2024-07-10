#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        unordered_map<char,int>mp;
        int ans=0;
        for(auto x:a){
            if(mp[x]<m){
                mp[x]++;
                ans++;
            }
        }
        cout<<(7*m-ans)<<endl;
        
 
    
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