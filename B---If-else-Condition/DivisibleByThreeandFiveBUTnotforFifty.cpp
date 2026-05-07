#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    if(n%5==0 || n%3==0 && n%15!=0){
        cout<<"Divisible by 3 & 5 & Not Divisible by 15: "<< n;
    }
    else{
        cout<<"Not Divisible by 3 & 5 & Divisible by 15: "<< n;
    }
    return 0;
}