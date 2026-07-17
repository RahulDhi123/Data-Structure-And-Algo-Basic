#include<iostream>
using namespace std;
int main(){
    int arr[10]={6,7,8,9,10,11,12,3,4,5};
    int st=0;
    int end=9;
    int ans=-1;
    while(st<end){
        int mid=st+(end-st)/2;
        if(arr[0]<=arr[mid]){
            st=mid+1;
        }
        if(arr[0]>arr[mid]){
            ans=arr[mid];
            end=mid;
       
        }
    }
    cout<<ans;
}