#include<iostream>
using namespace std;
void printArray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void swapAlternate(int array[],int k){
    for(int i=0;i<k;i=i+2){
        if(i+1<k){
            swap(array[i],array[i+1]);
        }

    }
}
int main(){
    int even[8]={3,4,56,7,89,0,8,6};
}