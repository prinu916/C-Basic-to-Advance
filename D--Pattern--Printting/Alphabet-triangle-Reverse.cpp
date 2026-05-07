#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <=n-i; j++) {
             cout <<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
    return 0;
}
