#include<iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=0;i<n;i++)
    {
        int fib=a+b;
        cout<<fib<<" ";
        a=b;
        b=fib;
    }
    cout<<"b";
}