// PRINT THE SUM OF ELEMENTS IN ARRAY

#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[10]={123,-65,234,-867,345,576,98,-87,76,99};
    for(int i=0;i<10;i++){
       sum=sum+arr[i];
    }
    cout<<sum;
}