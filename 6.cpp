// KADANE'S ALGO


#include<iostream>
using namespace std;
int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int maxSum=INT32_MIN;
    int currSum=0;
    for(int i=0;i<9;i++){
        currSum+=arr[i];
        maxSum=max(maxSum,currSum);
        if(currSum<0){
            currSum=0;
        }
        
    }
    cout<<maxSum;
}
