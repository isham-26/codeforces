#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int size;
    cin>>size;
    if(size<2||size%2==1 ){
        cout<<"NO"<<endl;
        return;

    }
    string ans="AAB";
    for(int i=3;i<=size;i+=2){
        ans+="AAB";
    }
    cout<<"YES"<<endl;
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