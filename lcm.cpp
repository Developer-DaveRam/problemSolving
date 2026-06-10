#include<iostream>
using namespace std;

int gcd(int a,int b){
    return b == 0 ? a : gcd(b,a%b);
}

int lcm(int a ,int b){
    if ( a== 0 || b==0 )return 0;
    return (a/gcd(a,b))*b;

}

int main(){
    int a ;
    int b;
    cout<<"Enteer the a ";
    cin>>a;
    cout<<"ENter the b";
    cin>>b;
    cout<<"The out put"<<lcm(a,b);

}