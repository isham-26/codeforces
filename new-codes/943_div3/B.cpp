#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N,M;
        cin>>N>>M;
        string a,b;
        cin>>a;
        cin>>b;
        int count=0;
        for(int i=0;i<M;i++){
            if(a[count]==b[i]){
                count++;
            }
        }
        cout<<count<<endl;
        
        
 
    
}
signed main(){
    //consider number of test cases
    int isham_test;
    cin>>isham_test;
    while(isham_test--){
        isham_function();
    }
    return 0;
}