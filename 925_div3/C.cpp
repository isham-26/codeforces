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
    int i=1,j=1;
    while(arr[0]==arr[i] && i<size){
        i++;
    }
    while(arr[size-j-1]==arr[size-1] && j<size){
        j++;
    }
    if(arr[0]==arr[size-1]){
        i=i+j;
    }
    int ans=max(0,size-max(i,j));
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