// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cin>>n;
    int count = 0;
    
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    for(int i=0;i<v.size(); i++){
        int num = v[i];
        if(num!=0) continue;
        for(int j=i+1; j<v.size(); j++){
            if(v[j]==1){
                count++;
            }
        }
    }
    cout<<count;
}