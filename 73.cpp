// SORT ARRAY WITH(0,1,2)

#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,2,0,1,2,2,1,0,0,1};
    int swapped=0;
    int count=0;
    for(int i=0;i<9;i++){
       
        for(int j=0;j<10-i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j],arr[j-1]);
                swapped=1;
            }
           
        }
        count++;
        if(swapped==0){
            break;
        }
        

    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}