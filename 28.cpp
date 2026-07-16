// INTERSECTION OF TWO ARRAYS

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> num;
    int arr1[10]={1,4,2,6,8,7,5,9,76,45};
    int arr[6]={1,5,3,76,89,90};
                                       
    for(int i=0;i<sizeof(arr1)/4;i++){
        for(int j=0;j<sizeof(arr)/4;j++){
            if(arr1[i]==arr[j]){
                num.push_back(arr1[i]);
            }
        }
    }
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<"\t";
    }
}