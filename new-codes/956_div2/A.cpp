#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int N;
        cin>>N;
        int count=1;
        for(int i=0;i<N;i++){
            cout<<count<<" ";
            count++;
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