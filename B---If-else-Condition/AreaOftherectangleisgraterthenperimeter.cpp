#include<iostream>
using namespace std;
int main(){
    float l , b;
    cout<<"Enter the Length: ";
    cin>>l;
     cout<<"Enter the Breadth: ";
    cin>>b;
    float a = l * b;
    cout<<"Area of rectangle: "<< a <<endl;
    float p = 2 * (l + b);
    cout<<"Perimeter: "<< p <<endl;
    if(a > p){
        cout<<"Area of rectangle is greater than Perimeter: "<<endl;
    }
    else{
        cout<<"Area of rectangle Is not greater than perimeter: "<<endl;
    }
    return 0;
}