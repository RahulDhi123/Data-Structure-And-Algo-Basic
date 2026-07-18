// REVERSING AN ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int st=0;
    int end=9;

    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}