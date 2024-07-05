#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int x,n;
    cin>>x>>n;
    int ans=1;
    int temp=1;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            temp=x/i;
            if(i>=n){
                ans=max(ans,temp);
            }
            if(temp>=n){
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