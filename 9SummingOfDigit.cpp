#include<iostream>
using namespace std;

int summing(int n){
    int total  =0;
    while (n>0)
    {
        total += n%10;
        n/=10;
    }
    return total;
}

int main(){
    int n;
    cout<<"Enter the summing Number";
    cin>>n;
    cout<<summing(n);
}