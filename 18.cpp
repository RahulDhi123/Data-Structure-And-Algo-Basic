// FIBONACCI SERIES USING FUNCTION

#include<iostream>
using namespace std;

void fibbo(int n){
    int a=0;
    int b=1;
    for(int i=0;i<n;i++){
       int sum=a+b;
        cout<<a<<"\t";
        a=b;
        b=sum;
    }

}

int main(){
    int n;
    cout<<"enter number of terms\n";
    cin>>n;

    fibbo(n);
}
