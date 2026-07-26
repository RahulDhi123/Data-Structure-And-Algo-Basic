// nth power of a number

#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
    else{
        return n*power(n,p-1);
    }
}



int main(){
    int n;
    cout<<"ENTER ANY NUMBER:\n";
    cin>>n;

     int pow;
    cout<<"ENTER ANY POWER:\n";
    cin>>pow;

    int p=power(n,pow);
    cout<<"POWER OF ENTERED NUMBER IS:"<<p;
}