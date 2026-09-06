// 73 optimised

#include<iostream>
using namespace std;

int main(){
    int arr[10]={0,2,1,2,0,0,2,1,0,2};
    int count0=0;
    int count1=0;
    int count2=0;
     
    for(int i=0;i<10;i++){
        if(arr[i]==0){
            count0++;
        }

        if(arr[i]==1){
            count1++;
        }

        if(arr[i]==2){
            count2++;
        }
    }

    
    for(int i=0;i<10;i++){
        if(i<count0){
            arr[i]=0;
        }

        else if(i<(count0+count1)){
            arr[i]=1;
        }
        else if(arr[i]<(count0+count1+count2)){
            arr[i]=2;
        }
    }

    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}