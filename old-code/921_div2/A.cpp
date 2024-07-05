#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int N,K;
        cin>>N>>K;
        string ans="";
        while(N--){
            for(int i=97;i<97+K;i++){
                ans+=(char)i;
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