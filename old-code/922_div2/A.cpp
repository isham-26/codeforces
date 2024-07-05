#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int n,m;
    cin>>n>>m;
    m=m/2;
    cout<<n*m<<endl;
    
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