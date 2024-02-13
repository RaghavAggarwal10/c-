#include<iostream>
#include<vector>
using namespace std;
int main() 
{
    vector<int> arr={1,2,3,3};
    // Write your code here
    int n=arr.size();
    int ans=0;
    // for (int i = 0; i < n; i++) {
    //   ans = ans ^ arr[i];
    // }
    // for(int i=1;i<n;i++)
    // {
    //     ans=ans^i;
    // }
    // return ans;
    for(int i=0;i<n;i++){
        ans=ans+arr[i];
    }
    ans=ans-((n)*(n-1))/2;
    return ans;

}