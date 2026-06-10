#include<iostream>
using namespace std;

int main(){
    cout<<"Enter n"<<endl;
    int n; 
    cin>>n;
    int arr[n];
     cout<<"Enter Elements of Array"<<endl;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    

    cout<<"The OP ";
    for(int i = 0;i<n;i++){
        
    cout<<arr[i]<<" ";
    }

    return 0;

}