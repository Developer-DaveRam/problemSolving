#include<iostream>
using namespace std;

int main(){
    
    int year ;
    cout<<"enter any year"<<endl;
    cin>>year;

    if(year%4 ==0 && year%100 !=0 || year%400==0){
        cout<<"its Leap YEar"<<endl;
    }
      
    else{
        cout<<"Its not Leap Year"<<endl;
    }
  
}


