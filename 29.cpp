// BINARY SEARCH

#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,4,6,8,10,13,15,17,23,30};
    int st=0;
    int end=9;
    int target;
    cout<<"enter the target\n";
    cin>>target;

    int idx=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            idx=mid;
        }
        if(arr[mid]>target){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }


    if(idx){
        cout<<"ELEMENT IS PRESENT AT IDX:"<<idx;
    }
    else{
        cout<<"ELEMENT IS NOT PRESENT IN ARRAY";
    }
}
