#include<iostream>
using namespace std;

int main(){

    int stop;
    cout<<"enter range of fibonacci series"<<endl;
    
    cin>>stop;
       

    int a=0;
    int b=1;

    int arr[stop];
     
    arr[0]=a;
    arr[1]=b;

    cout<<a<<" "<<b<<" ";

    for(int i=2;i<stop;i++){
        
         int c=a+b;
         arr[i]=c;
         cout<<c<<" ";
         a=b;
         b=c;

    }
   
    cout<<endl;

    cout<<"Enter Position"<<endl;
    int n;
    cin>>n;

    for(int i =0;i<stop;i++){

        if(i==n){
            cout<<arr[i];
        }


    }



    return 0;

}