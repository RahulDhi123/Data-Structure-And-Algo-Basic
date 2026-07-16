// DECIMAL TO BINARY

#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"enter a number\n";
    cin>>n;
 int pow=1;
    int bin=0;
    while(n!=0){
        int dig=n&1;
       
        bin=bin+pow*dig;
        n=n>>1;
        pow=pow*10;

    }
    cout<<bin;
}