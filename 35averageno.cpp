
#include<iostream>
using namespace std;

int main(){
     
    cout<<"Enter size of array"<<endl;
    int n ;
    cin>>n;
    cout<<"Enter Array"<<endl;

    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

      int s =0;


    for(int i =0;i<n;i++){

        s=s+arr[i];


        
    }

    int c =s/n;

    cout<<"The average of array is "<<c;


    return 0;
}