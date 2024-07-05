#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    unordered_map<int,int>m;
    set<int>s;
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
       cin>>arr[i];
       m[arr[i]]++;
       s.insert(arr[i]);
    }
    int Me=0;
    int other=0;
    for(auto x:s){
        if(m.find(x)!=m.end()){
            if(m[x]==2){
               Me++;
            }else{
                other++;
            }
        }else{
            other++;
        }
    }
    cout<<Me<<endl;

        
 
    
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