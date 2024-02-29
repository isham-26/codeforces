#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=1;
    int j=0;
    while(j<n){
        for(int i=j+1;i<min(n,k);i++){
            if(arr[i-1]>arr[i]){
                cout<<"NO"<<endl;
                return;
            }
        }
        j=k;
        k*=2;
    }
    cout<<"YES"<<endl;
    
    

    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}