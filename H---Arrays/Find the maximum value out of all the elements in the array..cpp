#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/4;
    int maximum = arr[0];
    //int mini = -1; ---> This is also one method!!
    for(int i=1;i<n;i++){
        //if(arr[i]>maximum) maximum = arr[i];
        maximum = max(maximum,arr[i]);
    }
    cout<<maximum;
}

