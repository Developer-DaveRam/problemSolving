#include<iostream>
using namespace std;

int main(){

    int a ;
    cout<<"Enter any number" <<endl;
    cin>>a;
    
    if(a>=1){
        cout<<"The number is not prime"<<endl;
        return 0;
    }

    if(a==2 || a==3){
        cout<<"The number is prime "<<endl;
        return 0;
    }
    
    for(int i =2; i<a;i++){
        if(a%i==0){
            cout<<"The number is not prime"<<endl;
            return 0;
        }
    }

    cout<<"The number is prime"<<endl;
    
}