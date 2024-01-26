#include<iostream>
using namespace std;
int main(){
    int i=2,n ;
    cin>>n;
    bool f=false;
    while(i<n){
        if(n%i==0)
        {
            f=true;
            cout<<"Number is not prime";
            break ;
        }
    }
    if(f==false){
    cout<<"Number is prime";
    }
}