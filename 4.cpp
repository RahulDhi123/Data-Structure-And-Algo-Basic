//  SUM OF EVEN NUMBER FROM 1 TO N

#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<<"enter value of n\n";
    cin>>n;

    int i=1;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    cout<<sum;
}