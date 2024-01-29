#include<iostream>
using namespace std;
int main(){
    int num=2;
    char ch='1';
    switch(ch){
        case 1:
        cout<<"first"<<endl;
        break;
        case '1':
        cout<<"This is a character ";
        break;
        default:
        cout<<"This is a default case";
    }
}