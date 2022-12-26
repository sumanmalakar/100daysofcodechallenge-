// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>str;
    string s;
    string temp = "";
    cout<<"Enter num"<<endl;
    getline(cin,s);
    //cout<<s<<endl;
    for(int i=0; i<s.length(); i++){
          if(s[i] == '-'){
            str.push_back(temp);
            temp = "";
         
           
        }else{
       temp = temp + s[i];
    }
    }

    str.push_back(temp);
    sort(str.begin(),str.end());
    
    for(int i=0; i<str.size()-1; i++){
        cout<<str[i]<<"-";
    }
    cout<<str[str.size()-1];
    
    return 0;
}