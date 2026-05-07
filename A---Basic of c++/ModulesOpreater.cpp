 #include<iostream>
using namespace std;
int main(){
    int x = 8;
    int y = 3;
    cout<<"Answer: "<<x%y;             
    return 0;
}

//// Some important Points:
/// a % b = a [if a<b]
/// a % b = 0
/// a % (-b) = a % b
/// (-a) % b = -[a % b]