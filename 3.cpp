// SUM OF FIRST N NATURAL NUMBERS

#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"enter value of n"<<endl;
    cin>>n;

    int x=1;
    while(x<=n){
        sum=sum+x;
        x++;
    }
    cout<<sum;
}