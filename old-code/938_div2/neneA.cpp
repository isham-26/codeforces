#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int K,Q;
    cin>>K>>Q;
    vector<int> a(K);
    for(int i=0;i<K;i++){
        cin>>a[i];
    }
    int my=a[0];
    for(int i=0;i<Q;i++){
        int N;
        cin>>N;
        if(N>=my){
            cout<<my-1<<" ";
        }
        else{
            cout<<N<<" ";
        }
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