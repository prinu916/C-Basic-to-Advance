#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,50,40,60,80,70,90,100};
    int n = sizeof(arr)/4;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;
}