#include <bits/stdc++.h>
using namespace std;
// write function of this question
void isham_function()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n + 2, vector<int>(m + 2, 0));
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
             cout<<min(max({arr[i][j+1],arr[i+1][j],arr[i][j-1],arr[i-1][j]}),arr[i][j])<<" ";
        }
        cout<<endl;
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