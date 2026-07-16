// CALCULATOR USING SWITCH CASE

#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"enter first number\n";
    cin>>a;

    int b;
    cout<<"enter second number\n";
    cin>>b;

    char ch;
    cout<<"enter symbol of operation\n";
    cin>>ch;

    switch(ch){
        case '+': cout<<a+b;
            break;
        case '-': cout<<a-b;
            break;
        case '*': cout<<a*b;
            break;
        case '/': cout<<float(a)/float(b);
            break;
        case '%': cout<<a%b;
            break;
        default:cout<<"invalid operation"<<endl;
    }

    
}