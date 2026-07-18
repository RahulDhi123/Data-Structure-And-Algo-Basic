// MOVE ZEROES(LEETCODE)


#include<iostream>
using namespace std;


int main(){
    int arr[6]={1,0,0,3,0,6};
    int i=0;
    for(int j=0;j<6;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}