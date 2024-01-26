#include<iostream>
using namespace std;
int main()
{
    /*
    int n;
    cin>>n;
    if(n>=0){
        cout<<"Number is positive"<<endl;
    }
    else if (n==0){
        cout<<"Number is zero "<<endl;

    }
    else{
        cout<<"Number is negative";
    }
    int a,b;
    cin>>a>>b;
    cout<<"Value of a and b is "<<a<<" "<<b<<endl;
    if(a>b){
        cout<<"A is Greater than b";
    }
    else{
        cout<<"B is less than a";
    }
    */
   char ch;

   cout<<"Enter a character :";
   cin>>ch;
   if(ch>=65 && ch<=90)
   {
    cout<<"Upper ";
   }
   else if (ch>=97 && ch<=122)
   {
    cout<<"Lower";
   }
   else if(ch>=48 && ch<=57)
   {
    cout<<"This is a number";
   }
   
}