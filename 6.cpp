// FIBONACCI SERIES

#include<iostream>
using namespace std;
int main(){
    int a=0;
    int b=1;
    int n;
    cout<<"enter number of terms\n";
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        
        sum=a+b;
        cout<<a;
        a=b;
        b=sum;

    }
}