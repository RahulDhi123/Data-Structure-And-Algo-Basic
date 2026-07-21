// ROTATING ARRAY K TIMES FROM END

#include<iostream>
using namespace std;
int main(){
    int k;
    cout<<"enter:";
    cin>>k;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int a[10];
    for(int i=0;i<10;i++){
        a[(i+k)%10]=arr[i];
        
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<endl;
    }
}