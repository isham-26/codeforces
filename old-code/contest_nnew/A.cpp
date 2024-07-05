#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        long long N,K;
        cin>>N>>K;
        if(N==K){
            for(long long i=0;i<N;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }else{
            if(K==1){
                cout<<2<<" ";
                for(long long i=1;i<N;i++){
                    cout<<1<<" ";
                }
                cout<<endl;
            }else{
                cout<<-1<<endl;
            }
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