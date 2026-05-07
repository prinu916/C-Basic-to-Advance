#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a Side: ";
    cin>>a;
    cout<<"Enter b Side: ";
    cin>>b;
    cout<<"Enter c Side: ";
    cin>>c;
    if(a + b > c && b + c > a && c + a > b){
    cout<<"Valid Triangle: ";
    }
    else{
        cout<<"In Valid Triangle:";
    }
    return 0;
}