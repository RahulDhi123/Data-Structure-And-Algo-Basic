//  BUBBLE SORT

#include<iostream>
using namespace std;
int main(){



    int arr[10]={6,4,9,1,10,2,8,7,5,3};


    for(int i=1;i<10;i++){
        int Swap=0;
        for(int j=0;j<10-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                Swap=1;


            }
        }
        if(Swap==0){
            break;
        }
    }



      cout<<"AFTER SORTING:"<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
}


}