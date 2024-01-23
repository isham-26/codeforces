#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int j=1;
    string ans="";
    while(i<n and j<n){
        if(s[i]==s[j]){
            ans+=s[i];
            i=j+1;
            j=i+1;
        }else{
            j++;
        }
    }
    cout<<ans<<endl;

    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}