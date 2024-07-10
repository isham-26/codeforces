#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int N,F,K;
        cin>>N>>F>>K;
        unordered_map<int,int>mp;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        int removeItem=arr[F-1];
        int count=0;
        sort(arr,arr+N,greater<int>());
        for(int i=0;i<N;i++){
            if(arr[i]>removeItem){
                count++;
            }
        }
       int removeng_item_feq=mp[removeItem];
       if(count+removeng_item_feq<=K){
        cout<<"YES"<<endl;
       }else if(count+1>K){
          cout<<"NO"<<endl;
       }else{
         cout<<"MAYBE"<<endl;
       }
       


        
 
    
}
int main(){
    //considering the number of test cases
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}