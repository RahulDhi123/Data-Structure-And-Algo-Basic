// POINTERS

#include<iostream>
using namespace std;
int main(){
    // int a=5;
    // int *ptr=&a;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;



    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // cout<<arr;
     int *p=&arr[0];
    // cout<<endl<<p<<endl;


    // for(int i=0;i<10;i++){
    //     cout<<arr+i<<":"<<*(arr+i)<<endl;
        
    // }


    cout<<3[arr]<<endl;


    cout<<sizeof(arr)<<endl;       // DIFFERENCE 1
    cout<<sizeof(p)<<endl;


    cout<<&arr<<endl;               // DIFFERENCE 2
    cout<<&p<<endl;


    // arr=arr+1  not possible        // DIFFERENCE 3
    // p=p+1      possible

}