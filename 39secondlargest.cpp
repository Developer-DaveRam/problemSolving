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

     
    int largest=arr[0];
    int secondlargest=-1;
    for(int i =1;i<n;i++){

        if(largest<arr[i]){
           
            secondlargest=largest;
            largest=arr[i];
        }

        else if(arr[i]<largest && arr[i]>secondlargest){
            secondlargest=arr[i];
        }
    }

    cout<<"The Second largest number in this array is "<<secondlargest;








    return 0;
}