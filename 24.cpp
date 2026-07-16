// FIND UNIQUE ELEMENT IN AN ARRAY


#include<iostream>
using namespace std;

int unique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main(){
    int arr[11]={1,3,2,5,1,2,3,4,6,6,4};
    int ans=unique(arr,11);
    cout<<ans;
}