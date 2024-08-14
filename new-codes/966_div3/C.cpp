#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void fill_arr(int *arr,int N){
    for(int i=0;i<N;i++){
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
        int N,M;
        cin>>N;
        int arr[N+1];
        fill_arr(arr,N);
        cin>>M;
        map<int,char>ic;
        map<char,int>ci;

        for(int i=0;i<M;i++){
             string s;
             cin>>s;
             if(s.size()!=N){
                cout<<"No"<<endl;
                continue;
            }
            bool cheak=true;
            ic.clear();
            ci.clear();
            for(int i=0;i<N;i++){
                if(ci.count(s[i])){
                    if(ci[s[i]]!=arr[i]){
                        cheak=0;
                    }
                }
                if(ic.count(arr[i])){
                    if(ic[arr[i]]!=s[i]){
                        cheak=0;
                    }
                }
                
                ci[s[i]]=arr[i];
                ic[arr[i]]=s[i];
            }
            if(cheak){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
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