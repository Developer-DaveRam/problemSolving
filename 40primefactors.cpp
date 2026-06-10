#include<iostream>
using namespace std;


int main(){
         

    int n;
    cout<<"Enter a number to find prime factors"<<endl;
    cin>>n;

     

    int arr[n];
    int k=0;
    int flag=0;


      for(int i=2;i<n;i++){
          
          if(n%i==0){
              
            for(int j =2 ;j<i;j++){

                if(i%j==0){
                flag=1;
                }
                
            }
            if(flag==0){
               arr[k]=i;
               flag=0;
               k++;
            }
          }
      }


      for(int i =0;i<k;i++){
        cout<<arr[i]<<" ";
      }
     

    return 0;
}