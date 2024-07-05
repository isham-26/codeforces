#include <bits/stdc++.h>

using namespace std;

 int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a,q;
        string s;
        cin >>n>>a>>q;
        cin>>s;
        int count=0;
        if(n==a){
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=0;i<q;i++){
            if(s[i]=='+'){
                count++;
            }
            else{
                count--;
            }
        }
        if(count==0&&a==n-1){
            cout<<"MAYBE"<<endl;
        }
        else if(a+count==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}            