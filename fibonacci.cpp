#include<iostream>
using namespace std;

int main()
{

    int a =0;
    int b =1;
    int n;

    cout<<"Enter number"<<endl;

    cin>>n;
    int c =0;

    cout<<a<<" "<<b<<" ";

    for(int i =2; i<=n;i++){
       
        c=a+b;
        if(c>n){
            return 0;
        }
        cout<<c<<" ";
        a=b;
        b=c;
        

    }
   

}

