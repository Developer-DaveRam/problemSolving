#include<iostream>
using namespace std;

int main(){
     
    int n;
    cout<<" Enter the number "<<endl;
    cin>>n;

    int temp=n;
  
     int oddsum=0;
     int evensum=0;
    while(temp!=0){
        int last = temp%10;

        if(last%2==0){
        evensum=evensum+last;
        }
        else{
            oddsum=oddsum+last;
        }

        temp=temp/10;
    }

    cout<<"The sum of oddnumbers are "<<oddsum<<endl;
    cout<<"The sum of evennumbers are "<<evensum<<endl;
    
    return 0;
}