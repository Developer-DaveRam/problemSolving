
#include<iostream>
#include<algorithm>


using namespace std;
int main(){

    cout<<"Enter a string"<<endl;
    string s1;
    string s2;
    cin>>s1;
    cout<<"Enter another string"<<endl;
    cin>>s2;
     

    int n1 = s1.length();
    int n2 = s2.length();
    int count=0;

   
    if(n1!=n2){
        cout<<"false"<<endl;
    }

    for(int i=0;i<n1;i++){
      
         for(int j=0 ;j<n2;j++){
            if(s1[i]==s2[j]){
                count++;
            }
         }

    }  

    if(count!=n1){
        cout<<"False"<<endl;
    }

    if(count==n1){
        cout<<"True"<<endl;
    }
    return 0;

   



    //Another approach 
    // sort(s1.begin(),s1.end());
    // sort(s2.begin(),s2.end());
    // if(s1==s2){
    //     cout<<"true"<<endl;
    // }




}