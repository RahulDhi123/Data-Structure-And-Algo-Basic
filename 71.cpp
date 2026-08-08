// PRINT COUNTING

#include<iostream>
using namespace std;

int counting(int n){
    if(n==0){
        return 0;
    }
    else{
        cout<<n<<endl;
        counting(n-1);

    }


}

int main(){
    int n;
    cout<<"ENTER A NUMBER\n";
    cin>>n;

    counting(n);
}