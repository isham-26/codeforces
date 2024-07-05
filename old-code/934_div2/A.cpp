#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int n,k;
    cin>>n>>k;
    if(k>=n-1){
        cout<<1<<endl;
    }else{
        cout<<n<<endl;
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