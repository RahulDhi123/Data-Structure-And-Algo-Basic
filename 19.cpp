// MAX AND MIN ELEMENT IN ARRAY USING FUNCTION

#include<iostream>
using namespace std;

int max(int arr[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return max;
}


int min(int arr[],int n){
    int min=INT32_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    return min;
}


int main(){
    int arr[10]={54,23,-87,65,-97,-65,198,365,76,456};
    int M=max(arr,10);
    int m=min(arr,10);
    cout<<M<<endl;
    cout<<m;
}