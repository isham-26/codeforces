#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int a,b;
        cin>>a>>b;
        //if both are odd
        if(a%2!=0 && b%2!=0){
            cout<<"no"<<endl;
        }
        //if both are even
        else if(a%2==0 && b%2==0){
            cout<<"yes"<<endl;
        }
        //then two condition for both 1 odd and one even 
        else if(a%2==0 && b%2!=0){
            if(a/2==b){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
        }
        else if(a%2!=0 && b%2==0){
            if(b/2==a){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
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