// PEAK INDEX IN MOUNTAIN ARRAY

#include<iostream>
using namespace std;

int Mountain(int arr[],int st,int end){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid] && arr[mid+1]>arr[mid]){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[10]={1,1,2,3,4,5,4,3,2,1};
    int ans=Mountain(arr,0,9);
    cout<<ans;
}



