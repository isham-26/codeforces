#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N,M,K;
        cin>>N>>M>>K;
        int arr1[N],arr2[M];
        int count=0;
        for(int i=0;i<N;i++){
            cin>>arr1[i];
            
        }
        for(int i=0;i<M;i++){
            cin>>arr2[i];
            
        }
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(arr1[i]+arr2[j]<=K){
                    count++;
                }
            }
        }
        cout<<count<<endl;

           
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