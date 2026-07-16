// NCR PROGRAM USING FUNCTION

#include<iostream>
using namespace std;
int fac(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int comb(int n,int r,int sub){
    if(n<r){
        return 1;
    }
    return n/(r*sub);
}
int main(){
    int n;
    cout<<"enter value of n\n";
    cin>>n;

    int r;
    cout<<"enter value of r\n";
    cin>>r;

    int ans=comb(fac(n),fac(r),fac(n-r));
    cout<<ans;

}