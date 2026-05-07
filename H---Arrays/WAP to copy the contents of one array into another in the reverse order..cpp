//WAP to copy the contents of one array into another in the reverse order.
#include<iostream>
using namespace std;
int main(){
    int a[] = {12,11,44,55,20,4,5,3};
    int n = sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        int j = n-1-i;  
        b[i] = a[j];
    }
    //Otherway to solve this Change first Loop!!
    //for(int i=0;i<n;i++){
     //   b[i] = a[n-1-i];
   // }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    //When u don't want to Write this loop then add cout<<b[i]<<" "; int first loop!!!Comment answer!!!!!
    
}
