#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter square of number: ";
   cin>>n;
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=n;j++){
            cout<<(char)(j+96)<<" ";// 96 is the ASKII vlaue of small (a)!!
        }
        cout<<endl;
    }
    return 0;
}
