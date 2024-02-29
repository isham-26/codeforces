#include <bits/stdc++.h>
using namespace std;
 
#define long long long
#define mod 1000000007
 
 
void isham_function()
{
    long  X;
    long  N;
    long  temp;
    long  ans=1;
    cin>>X>>N;
 
    // egde case solve
    if(N==X){
        cout<<"1"<<endl;
        return;
    }
        // loop is running
        for(long i=1;i*i<=X;i++){
            if(X%i==0){
                temp=X/i;
                 if(i>=N){
                    ans=max(temp,ans);
                }
                if(temp>=N){
                   
                    ans=max(ans,i);
                }
               
            }
        }
    
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