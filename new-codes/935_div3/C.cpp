#include <bits/stdc++.h>
using namespace std;
#define int long long
//write function of this question
void isham_function(){
        int N;
        cin>>N;
        string a;
        cin>>a;
        vector<int>temp(N+1);
        int ans=-1;
        // temp[0]=(a[0]=='1');
        for(int i=1;i<=N;i++){
           temp[i]=temp[i-1]+(a[i-1]=='1');
        }
        // for(int i=0;i<N;i++){
        //   cout<<temp[i]<<" ";
        // }
        for(int i=0;i<=N;i++){
            int leftone=temp[i];
            int rightone=temp[N]-temp[i];
           
            if(2*leftone<=(i) && 2*rightone>=(N-i)){
                 //cout<<"hello "<<i<<endl;
                if(abs((2*i)-N)<abs((2*ans)-N)){
                    ans=i;
                }
            }
        }
        cout<<ans<<endl;
        

           
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