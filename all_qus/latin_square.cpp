#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    
    char arr[3][3];
    //runnning for loop  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
           cin>>arr[i][j];
    }
    int a=0,b=0,c=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]=='?'){
                for(int k=0;k<3;k++){
                    if(arr[i][k]=='A'){
                         a=1;
                    }
                    else if(arr[i][k]=='B'){
                         b=1;
                    }
                    else if(arr[i][k]=='C'){
                         c=1;
                    }
                }
               
            }
        }
    }
    if(a&&b){
        cout<<"C"<<endl;
    }
    else if(a&&c){
        cout<<"B"<<endl;
    }
    else{
        cout<<"A"<<endl;
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