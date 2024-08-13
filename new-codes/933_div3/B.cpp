#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N;
        cin>>N;
        vector<int>arr(N);
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        for(int i=1;i<N-1;i++){
            if(arr[i-1]<0){
                break;
            }
            
            arr[i]-=(2*arr[i-1]);
            arr[i+1]-=arr[i-1];
            arr[i-1]-=arr[i-1];
        }
        if(count(arr.begin(),arr.end(),0)==N){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
           
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