 #include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int a,b,m;
        cin>>a>>b>>m;
        cout<<((m/a)+1)+((m/b)+1)<<endl;
           
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