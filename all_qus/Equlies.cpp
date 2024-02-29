#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int size;
    cin>>size;
    long long arr[size];
    //runnning for loop  
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,arr+size);
    int ans;
    for(int i=0;i<size;i++){
        ans=0;
        unordered_map<int,int> map;
        for(int j=0;j<size;j++){
            if(j!=i){
                int temp=abs(arr[i]-arr[j]);
                map[temp]++;
                if(temp<size && map.find(temp)!=map.end()){
                    ans++;
                }
            }
        }
    }
    
    cout<<ans+1<<endl;
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