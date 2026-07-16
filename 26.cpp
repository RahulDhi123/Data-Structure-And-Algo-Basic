 // FIND DUPLICATES IN AN ARRAY

 #include<iostream>
 using namespace std;
 int main(){
     int arr[10]={1,2,3,4,5,6,6,7,8,9};
     int n=sizeof(arr)/4;
     int sum=0;
     for(int i=1;i<n;i++){
         sum=sum+i;

     
     int S=0;
     for(int i=0;i<n;i++){
         S=S+arr[i];
       
     }


     int dup=S-sum;
         cout<<dup;

 }

