#include<iostream>
using namespace std;
int main(){


   string s;
   cout<<"Enter a String"<<endl;
   cin>>s;

   int ptr1=0;
   int ptr2 =s.length()-1;

   while(ptr1<=ptr2){
       
    char ch = s[ptr1];
    s[ptr1]=s[ptr2];
    s[ptr2]=ch;
    ptr1++;
    ptr2--;

   }

   cout<<s<<endl;
   
    return 0;
}