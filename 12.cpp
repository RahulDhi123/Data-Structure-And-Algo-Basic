// COMPLEMENT OF BASE 10 INTEGER

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER\n";
    cin>>n;


    int com=0;
    int po=1;
    while(n!=0){
        int d=n&1;
        int s;
        if(d==1){
            s=0;
        }
        else{
            s=1;
        }
        com=com+s*po;
        po=po*10;
        n=n>>1;
    }
    int sum=0;
    int p=0;
    while(com!=0){
        int di=com%10;
        sum=sum+di* pow(2,p);
        p=p+1;
        com=com/10;
    }
    cout<<sum;
}