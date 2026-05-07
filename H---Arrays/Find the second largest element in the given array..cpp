//Find the second largest element in the given array.
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {10,1,2,4,5,8,7,9,4};
    int n = sizeof(arr)/4;
    int mx = INT_MIN;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]!=mx)
        smax = max(smax,arr[i]);
    }
    cout<<smax;
}