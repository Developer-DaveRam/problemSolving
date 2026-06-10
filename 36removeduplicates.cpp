#include<iostream>
using namespace std;

int main(){
    
     cout<<"Enter the size of the array "<<endl;
     int n ;
     cin>>n;

     cout<<"Enter the elements of the array "<<endl;
     int arr[n];

     for(int i =0;i<n;i++){
        cin>>arr[i];
     } 
       
    //  int k=1;
    //  int ans[n];

    //  ans[0]=arr[0];

    //  //Remove Duplicate element from th array 
    //  for(int j=1;j<n;j++){
        
    //     if(arr[j]!=arr[j-1]){
    //         ans[k]=arr[j];
    //         k++;
    //     }
    //  }

    //   for(int i =0;i<k;i++){
    //     cout<<ans[i]<<" ";
    //   }




     int l =0;
     int duplicate[n];


      //Find Duplicates from the array 
      for(int j=1;j<n;j++){
        
        if(arr[j]==arr[j-1]){
            duplicate[l]=arr[j];
            l++;
        }
      
       }
     
        for(int i =0;i<l;i++){
        cout<<duplicate[i]<<" ";
      }

      
       
    return 0;
}