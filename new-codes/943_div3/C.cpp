#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N;
        cin>>N;
        int arr[N-1];
        int maxi=0;
        for(int i=0;i<N-1;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
        vector<int>ans(N);
        ans[0]=maxi+1;
        int counter=0;
        for(int i=1;i<N;i++){
            ans[i]=ans[i-1]+arr[i-1];  
        }
        for(int i=0;i<N;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

        
 
    
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