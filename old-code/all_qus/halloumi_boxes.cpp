#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n<k){
        cout<<"NO"<<endl;
        return;
    }
    int count=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }else{
            count++;
            if((count>1&&k==1)){
                cout<<"NO"<<endl;
                return;
            }

        }
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