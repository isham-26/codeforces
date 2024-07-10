#include <bits/stdc++.h>
using namespace std;

// write function of this question
void isham_function()
{
    int n, M;
    cin >> n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    cin >> M;
    map<int,int>mp;
    int temp=0;
	for(int i=0;i<M;i++){
		int temp2;
		cin>>temp2;
		mp[temp2]++;
		if(i==M-1)temp=temp2;
	}
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp == b[i])
            flag = 1;
        if (a[i] != b[i]){
            if (mp[b[i]] != 0)
                mp[b[i]]--;
            else
            {
                cout << "NO" << endl;
                return;
            }
        }    
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return;
}
signed main()
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