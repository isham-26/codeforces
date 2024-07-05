#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
    }
    if(mini!=arr[0]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    return;
    

    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}