#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int i=1;
    //1 st pattern
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //2 nd pattern
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<i<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //3rd pattern
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //4th pattern 
    //  while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<n-j+1<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // int count=1;
    //5th pattern 
    //  while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<count<<" ";
    //         count++;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //6th pattern
    //  while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //7th pattern 
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //8 th pattern
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<"*"<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }   

    //9th pattern
    // int count =1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //10 th pattern
    // while(i<=n){
    //     int j=1;
    //     int count =i;
    //     while(j<=i){
    //         cout<<count<<" ";
    //         count++;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //10 th alternate pattern 
    //  while(i<=n){
    //     int j=i;
    //     while(j<2*i){
    //         cout<<j<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    //  }

    //11 th pattern 
    //  while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<i-j+1<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // 12 th pattern
    //  while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch='A'+i-1;
    //         cout<<ch<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    // 13 th pattern 
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         char ch='A'+j-1;
    //         cout<<ch<<" ";
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //14 th pattern 
    // char ch='A';
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         ch++;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //15 th pattern 
    // while(i<=n){
    //     int j=1;
    //     char ch ='A'+i-1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         ch++;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //16 th pattern
    // char ch='A';
    //  while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         ch++;
    //         j=j+1;
    //     }
    //     cout<<endl;
    //     i=i+1;
    // }

    //17 th pattern
    while(i<=n){
        int k=n-i;
        while(k>=0){
            cout<<" ";
            k--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        int f=i-1;
        while(f>0)
        {
            cout<<f<<" ";
            f--;
        }
        cout<<endl;
        i++;
    }

}