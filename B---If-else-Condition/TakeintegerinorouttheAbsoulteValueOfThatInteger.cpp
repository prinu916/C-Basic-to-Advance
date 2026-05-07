#include<iostream>
using namespace std;
int main(){
    int x ;
     cout<<"Enter the Number: ";
     cin>>x;
     //if(x>=0){
      //  cout<<x<<endl;
     //}
    // else{
     //   cout<<-x<<endl;
    //}
       // cout<<"Wow!!";

       // if you want you change n into its absolute value!!
       if(x<0) x = -x;
       {
        cout<<x;
       }
    return 0;
}