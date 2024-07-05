#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int n,m,k;
    cin>>n>>m>>k;
    string a,b;
    cin>>a;
    cin>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0;
    int j=0;
    string c="";
    int p=0,q=0;
    while(i<n && j<m){
       if((a[i]<b[j] && p<k)||q==k){
         c+=a[i++];
         p++;
         q=0;
       }else{
          c+=b[j++];
          q++;
          p=0;

       }
    }
    cout<<c<<endl;
    
    
}
int main(){
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}