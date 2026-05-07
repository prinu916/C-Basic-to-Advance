//Find the minimum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/4;
    int mini = arr[0];
    for(int i=1;i<n;i++){
       // if(arr[i]<mini) mini = arr[i];
        mini = min(mini,arr[i]);
    }
    cout<<mini;
}