
#include<iostream>
using namespace std;

int main(){
   
    int arr[250]; int p =1;int s=0;

    int k=0;

    for(int i =1; i<=500; i++){
        
      int temp =i;
      int count=0;

      while(temp!=0){
         
        temp=temp/10;
        count++;

      }

       temp=i;
       
       s=0;

       while(temp!=0){
        int last = temp%10;
        p=1;
        for(int i=1; i<=count; i++){
           p=p*last;
        }
         s=s+p;
         temp=temp/10;


       }

       if(i==s){
        arr[k]=i;
        k++;
       }



    }


    
    

    for(int i=0;i<k;i++){

        cout<<arr[i]<<" ";

    }
    

}