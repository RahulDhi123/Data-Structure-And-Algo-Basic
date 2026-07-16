// REVERSING AN ARRAY

#include<iostream>
using namespace std;
void reverse(int arr[],int st,int end){
    while(st<=end){
        int c;
        c=arr[st];
        arr[st]=arr[end];
        arr[end]=c;
        st++;
        end--;
    }
}


int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
}