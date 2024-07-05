#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int n;
        cin >> n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int p[n];
        int curr_mx=n;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>0){
                p[i]=curr_mx-arr[i];
                curr_mx=p[i];
            }else{
                p[i]=curr_mx+abs(arr[i]);
            }
        }
        for(auto x:p){
            cout<<x<<" ";
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