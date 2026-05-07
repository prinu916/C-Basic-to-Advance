//For Maximum Value:--->
#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {-10,-2,-1,-50,-60};
    int n = sizeof(arr)/4;
    int maximum =INT_MIN;
    for(int i=1;i<n;i++){
        maximum = max(maximum,arr[i]);
    }
    cout<<maximum;
}

//For Minimum Value ---->
//#include<climits>
//INT_MIN;