#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    vector<pair<int,int >>vp;
    for(int i=0;i<4;i++){
        int a,b;
        cin>>a>>b;
        vp.push_back({a,b});
    }
    int side=0;
    for(int i=1;i<4;i++){
        if(vp[0].first==vp[i].first){
            side=abs(vp[0].second-vp[i].second);
            break;
        }
    }
    cout<<side*side<<endl;
    
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