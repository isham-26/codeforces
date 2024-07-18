#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N,K;
        cin>>N>>K;
        int arr[N];
        int sum=0;
        for(int i=0;i<N;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum<=K){
            cout<<N<<endl;
            return;
        }
        int ans=0;
        int i=0;
        int j=N-1;
        int l=(K+1)/2;
        int r=K/2;
        while(l>=arr[i]){
            ans++;
            l-=arr[i++];
        }
        while(r>=arr[j]){
            ans++;
            r-=arr[j--];
        }
        cout<<ans<<endl;
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
