#include <bits/stdc++.h>
using namespace std;
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int prev;
        int k=0;
        int count=0;
        while(s[k]=='B'){
            k++;
        }
        prev=k;
        if(k==n){
            cout<<count<<endl;
            return;
        }
        else{
            for(int i=k;i<n;i++){
                if(s[i]=='A'){
                    continue;
                }else{
                    count+=(i-prev);
                    prev=i;
                }
            }
        }
        cout<<count<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        
        
    }
    return 0;
}