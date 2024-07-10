#include <bits/stdc++.h>
using namespace std;
bool checkerMAtrix(vector<vector<int>>& arr,int r,int c){
    bool f = false;
    for(int i = 0;i<arr.size();i++){
        if(arr[i][c] == 1 || arr[i][c] == 2){
            f = true;
        }
    }
    if(!f){
        return false;
    }
    int size = arr[0].size();
    for(int i = 0;i<size;i++){
        if(arr[r][i] == 1 || arr[r][i] == 2){
            return true;
        }
    }
    return false;
}

void isham_function(){
    int n,m;
    cin>>n>>m;
    //first matrix
    vector<vector<int>> arr1(n,vector<int> (m,0));
    for(int i = 0;i<n;i++){
        string S;
        cin>>S;
        for(int j = 0;j<m;j++){
            arr1[i][j] = S[j]-'0';
        }
    }
    //second matrix
    vector<vector<int>> arr2(n,vector<int> (m,0));
    for(int i = 0;i<n;i++){
        string s;
        cin>>s;
        for(int j = 0;j<m;j++){
            arr2[i][j] = s[j]-'0';
        }
    }

    int ans = 0;

    vector<vector<int>> isham(n,vector<int> (m,-1));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            int diff = arr2[i][j] - arr1[i][j];
            if(diff<0){
                diff = 3+diff;
            }
            ans += diff;
            isham[i][j] = diff;
        }
    }



    if(ans%3 != 0){
        cout<<"NO"<<endl;
        return;
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(isham[i][j] == 2){
                isham[i][j] = 0;
                if(!checkerMAtrix(isham,i,j)){
                    cout<<"NO"<<endl;
                    return;
                }
                isham[i][j] = 2;
            }
        }
    }
    cout<<"YES"<<endl;
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
