#include<iostream>
using namespace std;

int main(){ 

  int  n ;
  cout<<"Enter a number"<<endl;

  cin>>n;
   
  int temp = n;
   

  int sum =0;
  int count=0;
   

  while(temp!=0){
    temp=temp/10;
    count++;
  }
   

  temp = n;
  int p = 1;
   

  while(temp!=0){
   
    int last = temp%10;
    for(int i =1;i<=count; i++){
       p=p*last;
    }
    sum=sum+p;
    p=1;
    temp=temp/10;
  }

   if(sum ==n){
    cout<<"Armstrong number "<<endl;
   }
   else{
    cout<<"Not an armstrong number "<<endl;
   }
 
      
    return 0;

}