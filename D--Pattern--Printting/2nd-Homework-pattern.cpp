#include<iostream>
using namespace std;
int main(){
   int row;
   cout<<"Enter Number of Row: ";
   cin>>row;
    for(int i=1;i<=row;i++){ 
        if(i%2!=0){
           for(int j=1;j<=i;j++){ 
             cout<<j<<" ";
            }
         } else{
             for(int j=1;j<=i;j++){
                cout<<(char)(j+64)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
