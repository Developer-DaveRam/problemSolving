#include<iostream>
using namespace std;
int main(){
     
     int n ;
     cout<<"Enter the number"<<endl;

     cin>>n;
     int s=0;

      for(int i =1;i<n;i++){

          if(n%i==0){
            s=s+i;
          }
      }

      if(n==s){

        cout<<n<<" "<<s<<endl;
        cout<<"the number is perfect"<<endl;

      }
      else{

        cout<<"the number is not perfect"<<endl;
        
      }

    return 0;
}