#include<iostream>
using namespace std;
int main(){
    int cp , sp ;
     cout<<"Enter Cost Price: ";
     cin>>cp;
     cout<<"Enter Selling Price: ";
     cin>>sp;
     
     if(sp>cp){
        cout<<"Profit is "<<sp-cp<<endl;
    }
     else if(sp<cp){
        cout<<"Loss is "<<cp-sp<<endl;
    }
    else{
        cout<<"No Profit || No Loss!!";
    }
        
    return 0;
}