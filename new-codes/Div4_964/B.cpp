#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int ans = 0;

    int suneet[2] = {a1, a2};
    int slavic[2] = {b1, b2};

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            int suneet_win_count = 0;
            int slavic_win_count = 0;

            if (suneet[1 - i] > slavic[1 - j])
            {
                ++suneet_win_count;
            }
            else if (suneet[1 - i] < slavic[1 - j])
            {
                ++slavic_win_count;
            }

            if (suneet[i] > slavic[j])
            {
                ++suneet_win_count;
            }
            else if (suneet[i] < slavic[j])
            {
                ++slavic_win_count;
            }

            if (suneet_win_count> slavic_win_count)
            {
                ++ans;
            }
        }
    }

    cout <<ans<<endl;
           
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