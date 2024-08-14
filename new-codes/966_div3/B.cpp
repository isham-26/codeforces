#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void fill_arr(int *arr,int N){
    for(int i=1;i<=N;i++){
        cin>>arr[i];
    }
}
void print_arr(int *arr,int N){
    for(int i=1;i<=N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void isham_function(){
        int N;
        cin>>N;
        int arr[N+1];
        fill_arr(arr,N);
         unordered_set<int> s;
         s.insert(arr[1]);

    bool isValid = true;

    for (int i = 2; i <= N; ++i)
    {
        int seat_fill = arr[i];
        if (s.count(seat_fill - 1) == 0 && s.count(seat_fill + 1) == 0)
        {
            isValid = false;
            break;
        }
        s.insert(seat_fill);
    }

    if (isValid)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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