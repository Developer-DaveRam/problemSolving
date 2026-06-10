#include<iostream>
using namespace std;

int main(){

   string s;
   cout<<"Enter the string"<<endl;
   cin>>s;
   int n =s.length();
   int arr[n];
   int k =0;
    int count=0;

    for(int i=0;i<n;i++){
          count=0;
       for(int j=0;j<n;j++){
           if(s[i]==s[j]){
            count++;
           }

       }

       cout<<" The Frequency of the element "<<s[i]<<" is : "<<count<<endl; 

     }
    return 0;

    
}