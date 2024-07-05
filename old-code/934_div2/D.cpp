#include <bits/stdc++.h>
using namespace std;
// write function of this question
int solve(string s)
{
    vector<vector<int>> dp(s.size(), vector<int>(s.size()));
    unordered_set<int> st;
    int sum = 0;
    for (int g = 0; g < s.size(); g++)
    {
        for (int i = 0, j = g; j < s.size(); j++, i++)
        {
            if (g == 0)
            {
                dp[i][j] = 0;
            }
            else if (g == 1)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = 2;
                }
            }
            else
            {
                if (s[i] == s[j] && dp[i + 1][j - 1])
                {
                    dp[i][j] = dp[i + 1][j - 1] + 2;
                }
                else if (s[i] != s[j])
                {
                    dp[i][j] = j - i + 1;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }

            if (dp[i][j])
            {
                st.insert(dp[i][j]);
            }
        }
    }
    for(auto x:st){
        sum+=x;
    }
    return sum;
}
void isham_function()
{
    int n, q;
    string s;
    cin >> n >> q;
    cin >> s;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        string sub = s.substr(l - 1, r - l + 1);
        int ans = solve(sub);
        cout<<ans<<endl;
    }
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