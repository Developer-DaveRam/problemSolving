
#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,10};

    int oddsum =0;
    int evensum=0;

    for(int i=0;i<10;i++){

        if(arr[i]%2==0){
            
           evensum=evensum+arr[i];

        }
        else{
            oddsum=oddsum+arr[i];
        }
    }

    cout<<"the odd sum in arrays are "<<oddsum<<endl;
     cout<<"the even sum in arrays are "<<evensum<<endl;

}