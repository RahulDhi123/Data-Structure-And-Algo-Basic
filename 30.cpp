// FIRST AND LAST POSITION OF ELEMENT IN AN SORTED ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[8]={0,0,0,1,1,1,5,5};
    int st=0;
    int end=7;
    int first;
    int last;
    int key=5;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==key){
            first=mid;
            last=mid;
            
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{
            st=mid+1;
        }

    }

    while(true){
        if(arr[first-1]==arr[first]){
            first=first-1;
        }
        else{
            break;
        }
   
    }

    while(true){
        if(arr[last+1]==arr[last]){
            last=last+1;

        }
        else{
            break;

        }

    }
    cout<<first<<endl<<last;
}