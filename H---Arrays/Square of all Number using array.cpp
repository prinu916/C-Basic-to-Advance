//WAP create an array containging squares of all natural numbers till n and print the elements of the array.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * (i + 1);
    }
    cout << "Squares of natural numbers till " << n << " are:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
