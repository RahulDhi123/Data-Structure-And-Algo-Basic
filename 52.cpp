// MERGE TWO SORTED ARRAYS

#include<iostream>
using namespace std;
int main(){



    int arr1[5]={1,4,6,7,9};
    int arr2[4]={2,3,5,8};

    int arr3[9];

    int i=0;
    int j=0;
    int k=0;

    while(i<5 && j<4){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];

        }
        else{
            arr3[k++]=arr2[j++];
        }
    }

    while(i<5){
        arr3[k++]=arr1[i++];
    }


    while(j<4){
        arr3[k++]=arr2[j++];
    }


    for(int i=0;i<9;i++){
        cout<<arr3[i]<<endl;
    }
}