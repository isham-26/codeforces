#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int size;
    cin>>size;
    long long arr[size];
    //runnning for loop  
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    vector<char>st(size,'a');
    string ans="";
    for(int i=0;i<size;i++){
        ans+=st[arr[i]]++;
    }
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