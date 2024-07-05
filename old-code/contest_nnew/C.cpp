#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int n, x, y;
        cin >> n >> x >> y;

       // create a vector
        vector<int>nums(x);
        //create a varriable store ans
         int result = x - 2;
        for (int i = 0; i < x; ++i) {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < x - 1; ++i) {
            if (nums[i + 1] == nums[i] + 2) {
                result++;
            }
        }

        if ((nums[x - 1] + 2) % n == nums[0] && x >= 2) {
            result++;
        }

        cout << result << endl;

        
 
    
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