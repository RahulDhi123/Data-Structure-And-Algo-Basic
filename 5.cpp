// WHETHER THE ENTERED NUMBER IS PRIME OR NOT

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number\n";
    cin>>n;
    bool isPrime=true;
    if(n==0 || n==1){
        cout<<"not prime";
    }
    else{
    for(int i=2;i<=n/2;i++){
        if(n%2==0){
            isPrime=false;
            break;
        }
        }
    if(isPrime){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    
}
}