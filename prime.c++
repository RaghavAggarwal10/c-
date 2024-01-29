// #include<iostream>
// using namespace std;
// int main(){
//     int i=2,n ;
//     cin>>n;
//     bool f=false;
//     while(i<n){
//         if(n%i==0)
//         {
//             f=true;
//             cout<<"Number is not prime";
//             break ;
//         }
//     }
//     if(f==false){
//     cout<<"Number is prime";
//     }
// }
// alternate solution 


#include<iostream>
using namespace std;
// 0 -> Not a Prime no.
// 1 -> Prime no.

bool isPrime(int n ) {
   for(int i = 2; i < n; i++){
       if(n % i == 0) {
       //divide hogya h , not a prime no.
          return 0;
        }
   }
   return 1;
}

int main() {
   
   int n ;
   cin >> n;
   if(isPrime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;

   }
}