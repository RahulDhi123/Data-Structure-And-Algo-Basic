#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,5,6,7,8,9};
    int j=0;
    for(int i=0;i<10;i++){
        j=j^arr[i];
    

    }

    for(int i=1;i<10;i++){
        j=j^i;
    }

    cout<<j;
}