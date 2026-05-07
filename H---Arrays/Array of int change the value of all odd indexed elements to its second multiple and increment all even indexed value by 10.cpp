//Array of int change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array Size: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter Elements of array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i] = arr[i] + 10;
        }
        else{
            arr[i] = arr[i] * 2;
        }
    }
    cout<<"Modify array\n";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
    
}



