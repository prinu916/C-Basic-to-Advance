 #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    ///for(int i=1;i<=2*n-1;i+=2){
    ///4,7,10,13......upto
   /// for(int i=4;i<=3*n+1;i+=3){
       int a = 4;
    for(int i=1;i<=n;i++){
        cout<<a<<" "<<endl;
        a = a + 3;
    }          
    return 0;
}
