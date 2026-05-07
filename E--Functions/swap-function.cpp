#include<iostream>
using namespace std;
void swap(int& x , int& y){
    int team = x;
    x = y;
    y = team;
}
int main(){
   int x = 2 , y = 5 , team;
   cout<<x<<" "<<y<<endl;
  swap(x , y);
   cout<<x<<" "<<y<<endl;

}