#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int N,a,b,c;
        cin>>N>>a>>b>>c;
        int count=0;
        int mini=min(a,b);
        mini=min(mini,c);
        int ans=0;
        while(N){
            if(N%mini==0){
                count=N/mini;
                return;
            }
            else{
                N=N-mini;
                count++;
                if(N==b || N==a || N==c){
                    count++;
                    return;
                }
            }
        }
        cout<<count<<endl;
 
    
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