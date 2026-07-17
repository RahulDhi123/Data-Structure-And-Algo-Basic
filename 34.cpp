// TOTAL NUMBER OF OCCURRENCE IN AN SORTED ARRAY

# include<iostream>
using namespace std;
int firstOccurence(int arr[],int size,int target){
    int st=0;
    int end=size-1;
    int ans=-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int lastOccurence(int arr[],int size,int target){
    int st=0;
    int end=size-1;
    int ans=-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            ans=mid;
            st=mid+1;
        }
        else if(arr[mid]<target){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[10]={1,2,3,3,3,3,3,4,5,6};
    int f=firstOccurence(arr,10,2);
    int l=lastOccurence(arr,10,2);

     cout<<"TOTAL NUMBER OF OCCURRENCE="<<(l-f)+1;
}