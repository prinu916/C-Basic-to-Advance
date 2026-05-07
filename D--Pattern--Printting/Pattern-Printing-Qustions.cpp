#include<iostream>
using namespace std;
int main(){
   int row , col;
   // rectangle banana hain
   // rows -> row , cols -> col
   cout<<"Enter Number of Row: ";
   cin>>row;
    cout<<"Enter Number of Col: ";
   cin>>col;
    for(int i=1;i<=row;i++){ // row = row
        for(int j=1;j<=col;j++){ // cols = col
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
