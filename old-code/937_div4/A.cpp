#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c){
            cout<<"STAIR"<<endl;
        }else if(a<b && b>c){
            cout<<"PEAK"<<endl;
        }else{
            cout<<"NONE"<<endl;
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