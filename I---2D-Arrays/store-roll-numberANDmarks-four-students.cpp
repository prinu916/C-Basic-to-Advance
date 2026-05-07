#include<iostream>
using namespace std;
int main(){     
    int arr[4][2];
    arr[0] [0] = 80;
    arr[0] [1] = 90; 
    arr[1] [0] = 70;
    arr[1] [1] = 80; 
    arr[2] [0] = 75;
    arr[2] [1] = 70; 
    arr[3] [0] = 45;
    arr[3] [1] = 60; 
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}