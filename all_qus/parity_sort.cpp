#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int size;
    cin>>size;
    long long arr[size],copy[size];
    //runnning for loop  
    for(int i=0;i<size;i++){
        cin>>arr[i];
        copy[i]=arr[i];
    }
    sort(copy,copy+size);
    for(int i=0;i<size;i++){
        if(arr[i]%2!=copy[i]%2){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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