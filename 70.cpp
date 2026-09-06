// BUUBLE SORT(O(n^2))

#include<iostream>
using namespace std;

int main(){
   int arr[10]={6,3,9,10,1,8,7,5,2,4};

   for(int i=0;i<9;i++){
      int swapped=0;
      for(int j=1;j<10-i;j++){
         if(arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            swapped=1;
         }
      }
      if(swapped==0){
         break;
      }
   }

   for(int i=0;i<10;i++){
      cout<<arr[i]<<endl;
   }
}