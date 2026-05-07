#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(a < b && a < c){
    cout<<"A is Lesser:"<<a<<endl;
    }
    else if(b < a && b < c){
        cout<<"B is Lesser: "<<b<<endl;
    }
    else{
        cout<<"C is Lesser: "<<c;
    }
    return 0;
}