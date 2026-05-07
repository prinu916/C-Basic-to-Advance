//Count the number of Elements in given array grater than a given number x.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int x = 4;
    int count = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (arr[i] > x) {
            count++;
        }
    }

    cout << "Count = " << count;
    return 0;
}
