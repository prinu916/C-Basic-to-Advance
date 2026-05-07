#include <iostream>
using namespace std;

int main() {
    int a[] = {12,5,4,9,2,4,5,4,2,5};
    int n = sizeof(a)/4;
    int i = 0;
    int j = n-1;
    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
