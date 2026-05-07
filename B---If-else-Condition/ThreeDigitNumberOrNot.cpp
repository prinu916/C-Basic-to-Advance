#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
   // if(n > 99 and n < 1000){ //// you can write (and) but iske badle aap logical oprater use karo(&&)
    if(n > 99 && n < 1000){
        cout<<"Three digit Number: "<< n <<endl;
    }
    else{
        cout<<"Not Three digit Number: "<< n <<endl;
    }
    return 0;
}