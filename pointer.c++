#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int* p=&i;
    int** p1=&p;
    cout<<"printing p: "<<p<<endl;
    cout<<"address of p: "<<&p<<endl;
    cout<<"address of p: "<<*p1<<endl;
    cout<<"value  of i: "<<**p1<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p1<<endl;



}