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
    sort(arr,arr+size);
    cout<<arr[size-1]-arr[0]<<endl;
    
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