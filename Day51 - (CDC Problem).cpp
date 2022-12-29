#include<iostream>
using namespace std;
int main(){
    int a1,b1,a2,b2,a3,b3;
    float x,y;
    cin>>a1>>b1>>a2>>b2>>a3>>b3;
    x = (float)(a1+a2+a3)/3;
    y = (float)(b1+b2+b3)/3;
    cout<<x<<endl<<y;
    return 0;
}