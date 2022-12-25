https://placement.vit.ac.in/test?id=2f832e37-1fb6-4876-bc1a-b7775f66b8c0a0dae4dc-5c89-433f-af68-fa92c3115ada


// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>v;
    int sum = 0;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            v.push_back(i);
        }
    }
    for(int i=0; i<v.size(); i++){
        sum += v[i];
    }
    if(sum == n){
        cout<<n<<" is a perfect number";
    }else{
        cout<<n<<" is not a perfect number";
    }
    
    return 0;
}
