// 2-D ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[3][4];

    // taking input

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    

    // PRINTING OUTPUT
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}