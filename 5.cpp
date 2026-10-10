 // Maximum Subarray Sum (Brute force)

 #include<iostream>
 using namespace std;
 int main(){
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int s=0;
    for(int i=0;i<9;i++){
        int sum=arr[i];
        for(int j=i+1;j<9;j++){
            sum=sum+arr[j];
            if(sum>s){
                s=sum;
            }
        }
    }
    cout<<s;
 }