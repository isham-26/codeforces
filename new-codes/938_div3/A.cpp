#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int N,A,B;
        cin>>N>>A>>B;
        if(N%2==0){
            cout<<min(N*A,B*(N/2))<<endl;
        }else{
            cout<<min(N*A,(B*((N-1)/2)+A))<<endl;
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