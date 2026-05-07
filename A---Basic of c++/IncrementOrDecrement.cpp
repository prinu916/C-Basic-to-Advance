#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<x<<endl;
    ///it's a increment trick!!
   // x + 1;
  //  x += 1;
  // x++;
   // ++x;
   

   // Decrement trick!!
   // x - 1;
   // x -= 1;
   // x--;
   // --x;


// one diffrent think!!
//cout<<x++<<endl;  /// it's answer is 5,5,6
  cout<<++x<<endl;  //but it's 5,6,6 same in decrements!!
    cout<<x<<endl;
    return 0;
}