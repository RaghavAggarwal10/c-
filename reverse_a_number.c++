#include <bits/stdc++.h>
using namespace std;
int main(){
    long  ans=0;
    int x;
    cout<<"Enter a number:";
    cin>>x;
        int k=x;
        while(k!=0)
        {
            ans=k%10+ans*10;
            k=k/10;
        }
        if(ans>INT_MAX||ans<INT_MIN){
            ans= 0;
        }
        cout<<ans;
}