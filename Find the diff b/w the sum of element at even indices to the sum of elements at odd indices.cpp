//Find the diff b/w the sum of element at even indices to the sum of elements at odd indices
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    int evenSum = 0, oddSum = 0;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // calculating sums
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            evenSum += arr[i];   
        else
            oddSum += arr[i];    
    }
    cout << "Difference = " << (evenSum - oddSum);
    return 0;
}
