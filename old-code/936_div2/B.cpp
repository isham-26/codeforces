#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
//write function of this question
void isham_function(){
   long long n,k;
   cin>>n>>k;
   long long maxi=0;
   long long sumation=0;
   long long num=0;
   long long i=1;
   long long p=1;
   vector<long long>arr(n);
   for(long long i=0;i<n;i++){
    cin>>arr[i];
   }
   
   for(long long i=0;i<n;i++){
        num=num+arr[i];
      if(sumation+arr[i]>=arr[i]){
         
        sumation=sumation+arr[i];
        maxi=max(maxi,sumation);
      }else{
         
        sumation=arr[i];
        maxi=max(maxi,sumation);
      }
   }
  num=num-maxi;
   long long ans=maxi;
   
   while(i<=k){
   
    p=((p%mod)*(2%mod))%mod;
    i++;
   }
   
   ans=((ans%mod)*(p%mod))%mod;
   
   ans=((ans%mod)+(num%mod))%mod;
   
   ans=(ans+mod)%mod;
   cout<<ans<<endl;

    
}
int main(){
    //consider number of test cases
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}