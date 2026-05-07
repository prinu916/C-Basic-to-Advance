#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size (e.g., 7): ";
    if (!(cin >> n) || n <= 0) return 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j == i || j == n - 1 - i) cout << "*";
            else                           cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
