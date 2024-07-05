#include <bits/stdc++.h>
using namespace std;
// write function of this question
void isham_function()
{
    int n, m;
    cin >> n >> m;
    string s,c;
    int arr[m];
    cin>>s;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    cin>>c;
    set<int>st(arr,arr+m);
    sort(c.begin(),c.end());
    int i=0;
    for(auto x:st){
        s[x-1]=c[i++];//index strat in codefoces is 1 but i am user 0 index so use x-1
    }
    cout<<s<<endl;

}
int main()
{
    // consider number of test cases
    int isham_test;
    cin >> isham_test;
    while (isham_test--)
    {
        isham_function();
    }
    return 0;
}