#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
        int N;
        cin>>N;
        string s;
        cin>>s;
        set<int>st;
        for(int i=0;i<N;i++){
            st.insert(s[i]);
        }
        vector<int>auxiString;
        for(auto x:st){
           auxiString.push_back(x); 
        }
        map<char,char>mp;
        int i=0;
        int j=auxiString.size()-1;
        while(j>=0){
           mp[auxiString[i]]=auxiString[j];
           i++;
           j--;
        }
        for(int i=0;i<s.size();i++){
           s[i]=mp[s[i]];
        }
        cout<<s<<endl;

        
 
    
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