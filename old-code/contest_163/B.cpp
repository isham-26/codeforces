#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007


void isham(){
    int n;
    cin>>n;
    vector<int>arr(n);
     vector<int>temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    for(int i=n-1;i>=1;i--){
        if(arr[i]<arr[i-1]){
           
            for(int j=0;j<i;j++){
                int t;
                t=arr[j];
                if(t<10){
                    temp.push_back(t);
                }else{
                    int a=t/10;
                    int b=t%10;
                    temp.push_back(a);
                    temp.push_back(b);
                }
                
            }
            int ss=temp.size();
            for(int j=1;j<ss;j++){
                if(temp[j]>=temp[j-1]){
                    continue;
                }else{
                    cout<<"NO"<<endl;
                    return;
                }
            }
            int s=temp.size();
            if(temp[s-1]>arr[i]){
                cout<<"NO"<<endl;
                return;
                
            }
            break;
        }
    }
   
    cout<<"YES"<<endl;

}

  

int main() {
    int t;
    cin>>t;
    while(t--){
        isham();
     }

    return 0;
}