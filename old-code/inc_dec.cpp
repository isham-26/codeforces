#include <bits/stdc++.h>

using namespace std;

 int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,x,y;
        cin >>x>>y>>n;
        int count=1;
        vector<int>ans;
        for(int i=0;i<n-1;i++){
           ans.push_back(y);
           y-=count++; 
        }
        ans.push_back(x);
        if(ans[n-1]<x){
            cout<<-1<<endl;
        }
        for(int i=n-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}            