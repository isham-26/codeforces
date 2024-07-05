#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int n;
    cin>>n;
    string ans="";
   
        if(n<=27){
            ans+='a';
            ans+='a';
            n-=2;
            ans+=char(int('a')+n-1);
        }else{
            ans+="z";
            n-=26;
            if(n>26){
               ans+="z";
               n-=26; 
            }
            if(ans.size()==2){
               ans=char(int('a')+n-1)+ans;
               cout<<ans<<endl;
               return;
            }
            ans=char(int('a')+n-2)+ans;
            ans='a'+ans;
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