#include<iostream>
using namespace std;
int main(){
    int n;
    n=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    cout<<"enter k\n";
    cin>>k;

    for(int i=0;i<k;i++){
         int a=arr[n-1];
        for(int j=n-1;j>0;j--){
           
            arr[j]=arr[j-1];

        }
        arr[0]=a;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}