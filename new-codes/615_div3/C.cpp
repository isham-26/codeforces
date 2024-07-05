#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        long long n;
        long long N;
        cin>>n;
        int count=0;
        N=n;
        vector<long long>arr;
        for(int i=2;i*i<=N;i++){
            if(n%i==0){
                count++;
                arr.push_back(i);
                n=n/i;
            }
            if(count==2){
                arr.push_back(n);
                break;
            }
        }
        if(count<2){
            cout<<"No"<<endl;
        }
        else if(arr[0]==arr[2] || arr[1]==arr[2]){
           cout<<"No"<<endl;
        }else{
            cout<<"Yes"<<endl;
            cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
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