#include<iostream>
using namespace std;

int main(){
     
    int arr[]={1,2,3,4,5,6};

    int array[]={};

    cout<<"Enter length of array"<<endl;
    int n;
    cin>>n;

    cout<<"Enter Elements of array"<<endl;

    for(int i =0;i<n;i++){
        cin>>array[i];
    }
      
    
    for(int j=0;j<n;j++){
        cout<<array[j]<<" ";
    }

    cout<<endl;

    int s =0;
    for(int i =0;i<6;i++){
       
        s=s+arr[i];
    }

    cout<<"The sum of numbers in array is"<<s;






    return 0;
}