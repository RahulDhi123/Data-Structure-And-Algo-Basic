// BINARY TO DECIMAL
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary number\n";
    cin>>n;

    int dec=0;
    int p=0;
    while(n!=0){
        int bit=n%10;
        dec=dec+bit*pow(2,p);
        p=p+1;
        n=n/10;
    }

    cout<<dec;

}