// RECURSION
// FACTORIAL

#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n;
    cout<<"ENTER ANY NUMBER:\n";
    cin>>n;

    int f=fact(n);
    cout<<"FACTORIAL OF ENTERED NUMBER IS:"<<f;
}