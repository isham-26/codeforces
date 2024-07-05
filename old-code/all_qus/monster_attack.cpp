 //ankit kumar ---ankit7890
#include <bits/stdc++.h>
using namespace std;
#define ll long long
//write function of this question
void isham_function(){
            ll n,k;
            cin>>n>>k;
            
            ll arr[n];
            vector<pair<ll, ll>> v;
            for (ll i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
     
            for (ll i = 0; i < n; i++)
            {
                ll x;
                cin >> x;
                v.push_back({abs(x), arr[i]});
            }
            ll ans = 1;
            ll sum = 0;
            sort(v.begin(), v.end());
            
            for (ll i = 0; i < v.size(); i++)
            {
                sum += v[i].second;
                ll temp = v[i].first;
                ll x = sum / k;
                if (sum % k != 0){
                    
                    x++;
                }
                if (x> temp){
                    
                    ans = 0;
                }
            }
            if (ans){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
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
     
    
      
     
   