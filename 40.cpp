// SELECTION SORT

#include<iostream>
using namespace std;


void selectionSort(int arr[],int n){
    cout<<"BEFORE SORTING:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
     cout<<endl;

    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }

        }
            swap(arr[i],arr[min]);

    }

    cout<<"AFTER SORTING:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}



int main(){
    int arr[10]={6,4,9,1,10,2,8,7,5,3};
    selectionSort(arr,10);
}