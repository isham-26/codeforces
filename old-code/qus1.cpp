#include <bits/stdc++.h>

using namespace std;

bool isCheack(int x, const vector<int> &array)
{
    for (int num : array)
    {
        if (num % x == 0)
        {
            return true;
        }
    }
    return false;
}

void partitionArrays(vector<int> &a, vector<int> &b, vector<int> &c)
{
     b.push_back(a[0]);
    c.push_back(a[1]);

    for (int i=0;i<a.size();i++)
    {
        if (isCheack(a[i], c))
        {
            if (isCheack(a[i], b))
            {
                return;
            }
            else{
                b.push_back(a[i]);
            }
        }
        else
        {
            c.push_back(a[i]);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<int> b, c;
        partitionArrays(a, b, c);

        // if (b.size() == 0 || c.size() == 0)
        // {
        //     cout<< -1 << endl;
        // }
        // else
        // {
            cout<<b.size()<<" "<<c.size()<<endl;
            // cout << "Array b: ";
            for (int num : b)
            {
                cout << num << " ";
            }
            cout << endl;

            // cout << "Array c: ";
            for (int num : c)
            {
                cout << num << " ";
            }
            cout << endl;
        //}
    }
    return 0;
}
