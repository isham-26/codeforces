#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int n,k;
    cin>>n>>k;
    int count=0;
    if(k==(4*n)-2){
        cout<<2*n<<endl;
        return;
    }
     while(k>1){
        k-=2;
        count++;
     }
    if(k==1){
        count++;
    }
    cout<<count<<endl;  
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