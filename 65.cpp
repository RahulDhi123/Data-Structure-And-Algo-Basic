// LARGEST ROW SUM PROBLEM IN 2-D ARRAY

#include<iostream>
using namespace std;
int main(){
    int maxi=INT32_MIN;
    int rowidx;


     int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};


    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowidx=i;
        }
    }

    cout<<maxi<<endl<<rowidx;
}