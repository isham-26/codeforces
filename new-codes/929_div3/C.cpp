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
        int a,b,l;
        cin>>a>>b>>l;
        set<int>s;
        for(int x=1;l%x==0;x*=a){
            for(int y=1;l%(x*y)==0;y*=b){
                s.insert(l/(x*y));
            }
        }
        cout<<s.size()<<endl;
           
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