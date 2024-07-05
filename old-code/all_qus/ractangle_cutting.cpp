#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    long long A,B;
    cin>>A>>B;
    if(A%2==0||B%2==0){
        int a=A,b=B;
       if(A%2==0){
          A=A/2;
          int temp=A;
          A=B;
          B=temp;
          A=A*2;
          if(b==A){
             cout<<"No"<<endl;
          }else{
             cout<<"Yes"<<endl;
          }
       }else{
          B=B/2;
          int temp=B;
          B=A;
          A=temp;
          B=B*2;
          if(b==A){
             cout<<"No"<<endl;
          }else{
             cout<<"Yes"<<endl;
          }
       }
    }else{
        cout<<"NO"<<endl;
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