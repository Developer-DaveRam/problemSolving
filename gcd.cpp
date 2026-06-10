#include<iostream>
using namespace std;

int gcd(int a,int b){
    return b == 0 ? a : gcd(b,a%b);
}

int main(){
    int a ;
    int b;
    cout<<"Enter the a";
    cin>>a;
    cout<<"ENtet the b";
    cin>>b;
    cout<<"The out put "<<gcd(a,b);
}