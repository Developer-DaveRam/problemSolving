#include<iostream>
using namespace std;

int main(){
   
    int n ;
    cout<<"Enter Length"<<endl;
    cin>>n;
    int arr[n];
      
    cout<<"enter elements of array"<<endl;

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
     
     cout<<"Enter a number and position to replace"<<endl;
     
     int num; 
     int position;
     cin>>num>>position;

     for(int i=0;i<n;i++){

         if(i==position){

              char ch =arr[i];
              arr[i]=num;
             
         }

     }
       

     for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
     }


     
    return 0;


}