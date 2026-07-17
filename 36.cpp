//  SEARCH IN ROTATED SORTED ARRAY

#include<iostream>
using namespace std;

int search(int arr[],int st,int end,int target){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[st]<=arr[mid]){         // left sorted
            if(target>=arr[st] && target<arr[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }

        if(arr[end]>=arr[mid]){         // right sorted
            if(target<=arr[end]   && target>arr[mid]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int arr[10]={6,7,8,9,10,1,2,3,4,5};

    int  idx=search(arr,0,9,5);
    cout<<idx;

}

