#include<iostream>
using namespace std;
int main(){
    int x = 3;
    int *p = &x;
    p = &x;
    cout<<&x<<endl;
    cout<<x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
}
///Access the value of the variable Whose address is in the pointer---->>>> using derference/operator
