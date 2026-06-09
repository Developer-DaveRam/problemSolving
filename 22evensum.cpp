#include<iostream>
using namespace std;
int main(){
    
    cout<<"Enter Range"<<endl;
    int start;
    int stop;
    cin>>start>>stop;
    int oddsum =0;
    int evensum=0;

    for(int i =start ; i<=stop;i++){
        if(i%2==0){
           evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }


cout<<"the sum of even in range is"<<evensum <<endl;
cout<<"the sum of odd in range is "<<oddsum;
    return 0;

    
}

