#include<iostream>
using namespace std;

int main(){
    

 int a[] ={12,23,45,1,6,8};
 int largest =a[0];
 int smallest=a[0];
    
  for(int i =1;i<6;i++){
      
    if(largest<a[i]){
        largest=a[i];

    }

    if(a[i]<smallest){
        smallest=a[i];
         
        }

    }
     
    cout<<"The largest element in an array is "<<largest<<endl;
    cout<<"The smallest element in an array is "<<smallest<<endl;
    
    return 0;
   
}

