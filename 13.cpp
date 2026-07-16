// POWER OF TWO

# include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER\n";
    cin>>n;

    int ans=1;
    for(int i=0;i<=30;i++){
        
        if(ans==n){
            cout<<"yes";
            break;
        }
        if(ans<INT32_MAX/2){
            ans=ans*2;
        }
        

        
    }
    
}