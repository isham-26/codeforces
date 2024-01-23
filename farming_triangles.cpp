#include <bits/stdc++.h>
using namespace std;
bool is_Valid(int a,int b,int c){
    
    int maxi=max(a,max(b,c));
    int sum=a+b+c;
    int valid=sum-maxi;
    if(valid>maxi){
        return true;
    }else{
        return false;
    }
}
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}