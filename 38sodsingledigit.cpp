
#include<iostream>
using namespace std;
int main(){

    int n ;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int s =0;

    while(n!=0){

        int last = n%10;
         s=s+last;
         n=n/10;
         
         if(n==0 && s>=10){
            n=s;
            s=0;
         }

    }

    cout<<"The single digit addition of the number is "<<s;



    return 0;
}