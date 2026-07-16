// LINEAR SEARCH IN ARRAY

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number\n";
    cin>>n;

    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    int isFound=0;

    for(int i=0;i<10;i++){
        if(arr[i]==n){
            isFound=1;
            break;
        }
    }

    if(isFound){
        cout<<"present";
    }else{
        cout<<"not present";
    }

}