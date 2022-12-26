// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count = 1;
    int maxCount = 0;
    
    sort(str.begin(), str.end());
    
    for(int i=0; i<str.length()-1; i++){
        if(str[i] == str[i+1]){
            count++;
            maxCount = max(count, maxCount);
        }
        else{
            count = 1;
        }
    }
    cout<<maxCount;
}