#include<iostream>
using namespace std;
int main(){
    int n1 , n2;
     cout<<"Enter 1st Number: ";
     cin>>n1;
     char op;
     cout<<"Choose Operator: ";
     cin>>op;
     cout<<"Enter 2st Number: ";
     cin>>n2;
     switch(op){
        case '+':
            cout<<"Add:-> "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Sub:-> "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Multi:-> "<<n1*n2<<endl;
            break;
        case '/':
            cout<<"Divi:-> "<<n1/n2<<endl;
            break;
        case '%':
            cout<<"Reminder:-> "<<n1%n2<<endl;
            break;
        default:
            cout<<"Invaild Operator!!";
     }
     
     
    return 0;
}