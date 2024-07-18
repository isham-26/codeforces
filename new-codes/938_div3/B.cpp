#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N,C,D;
        cin>>N>>C>>D;
        int arr[N*N];
        int mini=INT_MAX;
        map<int,int>mp;
        for(int i=0;i<N*N;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            mini=min(mini,arr[i]);
        }
        vector<vector<int>>dp(N,vector<int>(N));
        dp[0][0]=mini;
        for(int i=1;i<N;i++){
            dp[i][0]=dp[i-1][0]+C;
        }
        for(int i=0;i<N;i++){
            for(int j=1;j<N;j++){
                dp[i][j]=dp[i][j-1]+D;
            }
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(mp.find(dp[i][j])==mp.end()){
                    cout<<"NO"<<endl;
                    return;
                }else{
                    mp[dp[i][j]]--;
                    if(mp[dp[i][j]]==0){
                        mp.erase(dp[i][j]);
                    }
                }
            }
        }
        if(mp.empty()){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        return;
        
 
    
}
signed main(){
    //consider number of test cases
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}
