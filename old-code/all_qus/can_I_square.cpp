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
    long long sum=0;
    for(int i=0;i<size;i++){
       sum+=arr[i];
    }
    long long sq=sqrt(sum);
    long long num=floor(sq);
    if(num==sum){
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