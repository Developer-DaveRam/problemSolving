#include<iostream>
using namespace std;
int main(){
     
    int n ;
    cout<<"Enter the number "<<endl;
    cin>>n;

    for(int i =1;i<=5;i++){

        int c =n*i;
        cout<<n<<"*"<<i<<"="<<c<<endl;
    }

    return 0;

    
}