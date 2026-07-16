// subtract sum and product of digits of a number

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number\n";
    cin>>num;
    int n=num;
    int sum=0;
    while(n!=0){
        int d=n%10;
        sum=sum+d;
        n=n/10;
    }

    int pro=1;
    while(num>=0){
        int d=num%10;
        if(d!=0){
            pro=pro*d;
            num=num/10;
        }
        else{
            pro=0;
            break;
        }
    }
    cout<<pro-sum;
}