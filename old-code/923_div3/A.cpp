#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int size;
    cin>>size;
    string s;
    cin>>s;
    int i=0;
    int j=size-1;
    while(s[i]=='W'){
        i++;
    }
    while(s[j]=='W'){
        j--;
    }
    // if(s[0]==s[size-1]){
    //     i+=j;
    // }
    cout<<max(0,j-i+1)<<endl;
    
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