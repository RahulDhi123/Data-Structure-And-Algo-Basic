// CHECK IF ARRAY IS SORTED AND ROTATED

#include<iostream>
using namespace std;
int main(){
    
    int arr[10]={6,9,10,1,2,3,4,5,7,8};
    int count=0;
    for(int i=0;i<9;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }

    }

    if(arr[0]<arr[9]){
       count++;
    }


    if(count<=1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }



}