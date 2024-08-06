#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        if((b+c)%3>c){
            cout<<-1<<endl;
            return;
        }
        ans=a+((b+c+2)/3);
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