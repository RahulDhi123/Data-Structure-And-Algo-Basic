#include<iostream>
using namespace std;

int main(){
    int arr[4]={-13,-26,46,57};
    cout<<"The number of bytes taken by array:"<<sizeof(arr)<<endl;

    cout<<endl;


    for(int i=0;i<4;i++){
        cout<<"Element "<<i+1<<":"<<arr[i]<<endl;
    }

    cout<<endl;

    int min=INT32_MAX,max=INT32_MIN;

    for(int i=0;i<4;i++){
        if(arr[i]>=max){
            max=i;
        }
        if(arr[i]<=min){
            min=i;
        }
    }

    cout<<"Smallest element:"<<arr[min]<<endl;
    cout<<"Largest element:"<<arr[max]<<endl;
}

