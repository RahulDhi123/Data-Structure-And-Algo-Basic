// REVERSING THE INTEGER

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    
    int rev=0;
    while(n!=0){
        int d=n%10;
        if(rev>INT32_MAX/10 || rev<INT32_MIN/10 ){
            return 0;
        }
        else{
        rev=rev*10+d;
        n=n/10;
    }
    cout<<rev;

}
}