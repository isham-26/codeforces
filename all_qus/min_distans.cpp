#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>point;
    sort(arr,arr+2*n);
    int i=0;
    int j=2*n-1;
    while(i<j){
       point.push_back({arr[i++],arr[j--]});
    }
    int dis=0;
    for(int i=0;i<point.size()-1;i++){
       dis+=abs(point[i].first-point[i+1].first)+abs(point[i].second-point[i+1].second);
    }
    cout<<dis<<endl;
    for(auto x:point){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    

    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}