// NUMBER OF 1 BITS

// WRITE A FUNCTION THAT TAKES UNSIGNED INTEGER AS INPUT and give no. of 1 bit as output

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number\n";
    cin>>n;

    int count=0;
    while(n!=0){
    if((n & 1)==1){
        count++;

    }
    n=n >> 1;
}
cout<<count;



}