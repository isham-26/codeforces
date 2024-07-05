#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int n, k;
        cin >> n >> k;

       
        vector<int> result(n, 1); 
        result[0] = k - (n - 1);  

        // Output the result array
        for (int i = 0; i < n; i++) {
            cout << result[i] <<" ";
        }
        cout<<endl;
        
 
    
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