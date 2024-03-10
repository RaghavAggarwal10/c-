#include<iostream>
using namespace std;
void sayDigit(int n,string *arr)
{
    if(n==0)
    {
        return ;

    }
    sayDigit(n/10,arr);
    int digit=n%10;
    cout<<arr[digit]<<" ";
}
int main()
{
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n,arr);
}