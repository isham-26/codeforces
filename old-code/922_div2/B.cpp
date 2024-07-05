#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int size;
    cin>>size;
    long long arr1[size],arr2[size],temp[size];
    //runnning for loop  
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size;i++){
        cin>>arr2[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<size;i++){
        mp[arr1[i]]=arr2[i];
    }
    sort(arr1,arr1+size);
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<mp[arr1[i]]<<" ";
    }
    cout<<endl;
 
    
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