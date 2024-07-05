#include <bits/stdc++.h>
using namespace std;
//write function of this question
void isham_function(){
    int size;
    cin>>size;
    int arr[size];
    //runnning for loop  
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int midi = size / 2;
        int answer = 0;

    sort(arr, arr+size); 

        if(size%2==0){
          midi--;
        }
        
        for (int i = midi; i < size; i++) {
            if(arr[midi]==arr[i]){
              answer++;
            }
        }

        cout << answer << endl; 

    
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