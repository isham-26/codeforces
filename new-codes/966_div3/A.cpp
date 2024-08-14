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
        if(N>=100 and N<=999){
            int last_digit=N%10;
            int remain=N/10;
            if(remain==10 && last_digit>=2){
                cout<<"Yes"<<endl;
                return;
            }else{
                cout<<"No"<<endl;
            }

        }else if(N>=1000 && N<=9999){
            
            int last=N%100;
            int remain=N/100;
            N=N/10;
            int second_last=N%10;
            if(second_last==0){
                cout<<"No"<<endl;
            }
            else if(remain==10 && last>=2){
                cout<<"Yes"<<endl;
                return;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            cout<<"No"<<endl;
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