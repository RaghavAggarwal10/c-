#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter a number ";
        cin>>n;
        int SumOfDigits=0;
        int ProductOfDigits=1;
        int k=n;
        while(k!=0){
            SumOfDigits+=k%10;
            ProductOfDigits*=k%10;
            k=k/10;
        }
        cout<< ProductOfDigits-SumOfDigits;
}