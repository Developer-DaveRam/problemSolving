#include<iostream>
using namespace std;
int main(){

    cout<<"Enter n"<<endl;

    int n;
    cin>>n;
    int arr[n];
    int k =0;

    for(int i =1;i<=n;i++){
      

        if(n%i==0){
            
           arr[k]=i;
           k++;

        }
        

    }

    for(int j =0 ;j<k;j++){
        cout<<arr[j]<<" ";
    }
    




    return 0;
}