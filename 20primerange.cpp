
#include<iostream>
using namespace std;

int main(){
     
    int start;
    int stop;

    int flag=0;

    cout<<"Enter the range start and stop "<<endl;

     cin>>start>>stop;
     int arr[stop]; 
     int k=0;

    for(int i=start;i<=stop;i++){

        for(int j=2;j<i;j++){
            
            if(i%j==0){
                flag=1;
                break;
            }
            
        }

        if(flag==0){
           arr[k]=i;
           k++;
        }

        flag=0;
    }
    

    for(int l=0;l<k;l++){
        cout<<arr[l]<<" ";
    }

    return 0;

    
}