#include<bits/stdc++.h>
#include<iostream>
using namespace std;   
bool isPresent(int arr[][4],int target,int row,int col){
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
        cout<<endl;
    }
    return 0;
} 
int largestRowSum(int arr[][4],int row,int col){
    int ans=0;
    int maxi=INT_MIN;
     for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }
        if(maxi>sum){
            maxi=sum;
            ans=row;
        }
    }

}

void printSum(int arr[][4],int row,int col)
{
    for(int row=0;row<3;row++)
    {
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }
        cout<<sum;
    }
}
int main()
{
    int arr[3][4];
    cout<<"enter the elements";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"printing elements";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++){
            cout<<arr[i][j];
        }
         cout<<endl;
    }
    cout<<"enter the element to search "<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"element foound"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

}