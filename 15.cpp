// MAKE A FUNCTION THAT WILL TELL IF ENTERED NUMBER IS EVEN OR NOT

#include<iostream>
using namespace std;

int even(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int n;
    cout<<"ENTER ANY NUMBER\n";
    cin>>n;

    int ans=even(n);
    if(ans==1){
        cout<<"even";
    }
    else{
        cout<<"odd";


    }

}
