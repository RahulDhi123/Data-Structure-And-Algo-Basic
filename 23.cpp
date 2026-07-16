//  SWAPPING ALTERNATE ELEMENTS IN AN ARRAY

#include<iostream>
using namespace std;

void Swap(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int Arr[9]={1,2,3,4,5,6,7,8,9};

    Swap(arr,10);
    Swap(Arr,9);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;

    for(int i=0;i<9;i++){
        cout<<Arr[i]<<"\t";
    }
    
}