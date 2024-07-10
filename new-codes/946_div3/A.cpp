#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int x,y;
        cin>>x>>y;
        int total=x+y*4;

        int forOne=ceil(double(total)/15);
        int forTwo=ceil(double(y)/2);
        cout<<max(forOne,forTwo)<<endl;
        return;
    
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