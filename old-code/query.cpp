#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int size=0;
   int last=-1;
   bool sorted=true;
   unordered_set<char>ms;
   int midops=0;
   int midopsmin=0;
   for(int i=0;i<n;i++){
      char c=s[i];
      if(c=='+'){
        size++;
        ms.insert('+');
        midops++;
        midopsmin=min(midopsmin,midops);
      }else if(c=='-'){
        size--;
        ms.insert('-');
        midops--;
        midopsmin=min(midopsmin,midops);
      }else if(c=='0'){
         if(size<2){
            cout<<"NO"<<endl;
            return;
         }else if((size>=2) and (last==-1 or last==0 or (last==1 and ms.find('+') != ms.end() and midopsmin<0))){
            ms.erase(ms.begin(),ms.end());
            midops=0;
            midopsmin=0;
            last=0;

         }else{
            cout<<"NO"<<endl;
            return;
         }
      }else if(c=='1'){
         if(last==0 and ms.find('-')==ms.end()){
            cout<<"NO"<<endl;
            return;
         }else if(last==0 and midopsmin>=0){
            cout<<"NO"<<endl;
            return;
         }else{
            last=1;
            ms.erase(ms.begin(),ms.end());
            midops=0;
            midopsmin=0;

         }
      }
   }
   cout<<"YES"<<endl;
   
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}