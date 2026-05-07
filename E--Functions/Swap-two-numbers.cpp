#include<iostream>
using namespace std;
int main(){
   int x = 2 , y = 5 , team;
   cout<<x<<" "<<y<<endl;
   team = x;
   x = y;
   y = team;
   cout<<x<<" "<<y<<endl;

}