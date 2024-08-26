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
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void isham_function(){
        int N;
        cin>>N;
        int arr[N];
        fill_arr(arr,N);
        sort(arr,arr+N);
        
        cout<<arr[(N/2)]<<endl;
           
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