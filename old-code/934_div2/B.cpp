#include <bits/stdc++.h>
using namespace std;
// write function of this question
void isham_function()
{
    int N, K;
    cin >> N >> K;
    int arr[2 * N];
    unordered_map<int, int> mp1, mp2;
    for (int i = 0; i < 2 * N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        mp1[arr[i]]++;
        mp2[arr[N + i]]++;
    }

    vector<int> ans1, ans2;
    for (int i = 1; i <= N; i++)
    {
        if (mp1[i] == 1)
        {
            ans1.push_back(i);
            ans2.push_back(i);
        }
    }
    if (ans1.size() < 2 * K && ans1.size() % 2 == 1)
    {
        ans1.pop_back();
        ans2.pop_back();
    }
    for (int i = 1; i <= N; i++)
    {
        if (mp1[i] == 2)
        {
            ans1.push_back(i);
            ans1.push_back(i);
        }
    }
    for (int i = 1; i <= N; i++)
    {
        if (mp2[i] == 2)
        {
            ans2.push_back(i);
            ans2.push_back(i);
        }
    }
    for (int i = 0; i < 2 * K; i++)
    {
        cout << ans1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 2 * K; i++)
    {
        cout << ans2[i] << " ";
    }
    cout << endl;
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