// ROW WISE SUM IN 2-D ARRAY


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
    

   for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];


    }
    cout<<"sum of element of "<<i+1<<" row is:"<<sum<<endl;
   }
}