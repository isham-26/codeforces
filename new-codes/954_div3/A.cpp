#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        cout<<arr[2]-arr[0]<<endl;

        
 
    
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