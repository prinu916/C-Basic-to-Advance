#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int pro = 1;
    while(n!=0){
      int ld = n % 10;
       n = n / 10;
       pro *= ld;
    }
    cout<<"pro: "<<pro;

}