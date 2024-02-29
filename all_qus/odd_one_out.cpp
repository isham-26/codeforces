#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        cout<<c<<endl;
    }
    else if(c==b){
        cout<<a<<endl;
    }else{
        cout<<b<<endl;
    }
    
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