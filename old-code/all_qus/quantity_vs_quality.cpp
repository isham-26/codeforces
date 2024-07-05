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
    int i=2,j=size-2;
    long long sumR=arr[size-1],sumB=arr[0]+arr[1];
    while(i<j){
       sumB+=arr[i++];
       sumR+=arr[j--];
    }
    if(sumR>sumB){
        cout<<"YES"<<endl;
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