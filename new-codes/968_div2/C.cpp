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
        string s;
        // int arr[N+1];
        // fill_arr(arr,N);
        cin>>s;
        vector<char>char_a;
        string res="";
        map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        for(int i=0;i<N;i++){
            if(mp[s[i]]==1){
                char_a.push_back(s[i]);
            }else{
                res+=s[i];
            }
        }
        string ans="";
        int i=0;
        while(i<max(char_a.size(),res.size())){
            
            if(i<res.size()){
                ans+=res[i];
            }
            if(i<char_a.size()){
                ans+=char_a[i];
            }
            i++;
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