// SELECTION SORT

#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int n=10;
    for(int i=0;i<n;i++){
        int smallest=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}