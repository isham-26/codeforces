#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void fill_arr(int *arr,int N){
    for(int i=1;i<=N;i++){
        cin>>arr[i];
    }
}
void print_arr(int *arr,int N){
    for(int i=1;i<=N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void isham_function(){
        int N;
        cin>>N;
        int arr[N+1];
        fill_arr(arr,N);
        int sum=0;
        for(int i=1;i<=N;i++){
            sum+=(arr[i]);
        }
        if(sum%3==0){
            cout<<0<<endl;
        }else if(sum%3==1){
            int temp=0;
            for(int i=1;i<=N;i++){
                if(arr[i]%3==1){
                    temp=arr[i];
                }
            }
            if((sum-temp)%3==0){
                cout<<1<<endl;
            }else{
                cout<<2<<endl;
            }
        }else{
            cout<<1<<endl;
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