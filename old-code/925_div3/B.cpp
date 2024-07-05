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
    if(size==1){
        cout<<"YES"<<endl;
        return;
    }
    int sum=0;
    for(int i=0;i<size;i++){
       sum+=(arr[i]);
    }
    int check=0;
    for(int i=0;i<size;i++){
       check+=(arr[i]-(sum/size));
       if(check<0){
        break;
       }
    }
    if(check<0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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