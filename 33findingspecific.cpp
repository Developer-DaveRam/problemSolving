#include<iostream>
using namespace std;
int main(){

    cout<<"Enter n"<<endl;
    int n ;
    cin>>n;

    cout<<"Enter digit"<<endl;
    int d;
    cin>>d;

    
    int count=0;

    while(n!=0){
        int last =n%10;
        if(last==d){
             count++;
        }
        n=n/10;

    }

    cout<<count;

    return 0;
}