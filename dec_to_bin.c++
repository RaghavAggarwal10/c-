#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans=0;
    int k=n;
    int i=0;
    while (k!=0)
    {
        int bit=k&1;
        ans=bit*pow(10,i)+ans;
        k=k>>1;
        i++;

    }
    
}