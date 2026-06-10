#include<iostream>
using namespace std;
void factorial(int n){

    int facct = 1;
    for(int i = 1; i <= n;i++){
        facct = facct*i;
    };
    cout<< "The factorial of "<<n<< " is :"<<facct;
}

int main(){
    int n ;
    cout<<"Enter the fact number";
    cin>>n;
    factorial(n);
    return 0;
}