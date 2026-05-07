#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
   // if(n%5==0 or n%3==0){ //you can write("or") 
    if(n%5==0 || n%3==0){// otherwaise you can use logical oprater "||"
        cout<<"Divisible by 3 & 5: "<< n;
    }
    else{
        cout<<"Not Divisible by 3 & 5: "<< n;
    }
    return 0;
}