#include<iostream>
using namespace std;
int main(){
    int col,row;
    cout<<"Enter Number of Rows:- ";
    cin>>row;
    cout<<"Enter Number of colns:- ";
    cin>>col;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 or i==row or j==1 or j==col)
            cout<<"* ";
        else cout<<"  ";
        }
    
        cout<<endl;
    }
   
//Other Method:---> 
int n;
 cout<<"Enter Numbers:- ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 or i==n or j==1 or j==n)
            cout<<"* ";
        else cout<<"  ";
        }
    
        cout<<endl;
    }
     
    return 0;
}

    
