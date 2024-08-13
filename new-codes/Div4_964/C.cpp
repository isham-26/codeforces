#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int, int>> temp(n);

    for (int i = 0; i < n; ++i) {
        cin >> temp[i].first >> temp[i].second;
    }

    sort(temp.begin(), temp.end());

    if (temp[0].first >= s) {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i < n; ++i) {
        if (temp[i].first - temp[i-1].second >= s) {
            cout << "YES" << endl;
            return;
        }
    }

    if (m - temp[n-1].second >= s) {
        cout << "YES" << endl;
        return;
    }
    cout<<"NO"<<endl;
           
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