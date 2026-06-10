
#include<iostream>
using namespace std;


int main(){

   int arra[3][3] ={{1,2,3},{2,3,4},{5,6,7}};
   int arrb[3][3] ={{1,2,3},{2,3,4},{5,6,7}};

   int ans[3][3];

   for(int i =0;i<3;i++){

    for(int j =0 ;j<3;j++){

        int c =arra[i][j];
        int d =arrb[i][j];
        ans[i][j]=c+d;
    }
   } 
     

   for(int i =0;i<3;i++){
    for(int j =0 ;j<3;j++){
       cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   } 
    return 0;
}