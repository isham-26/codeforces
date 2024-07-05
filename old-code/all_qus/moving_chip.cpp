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
    int start=-1,end;
    for(int i=0;i<size;i++){
       if(arr[i]==1){
          if(start==-1){
            start=i;
          }
          end=i;
       }  
    }
    int count=0;
    for(int i=start+1;i<end;i++){
        if(arr[i]==0){
            count++;
        }
    }
    cout<<count<<endl;

    
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