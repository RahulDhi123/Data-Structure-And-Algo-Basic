// LINEAR SEARCH IN ARRAY

#include<iostream>
using namespace std;
int main(){
    int arr[10]={9,0,5,6,4,7,1,8,2,3};
    int x;
    cout<<"enter element:\n";
    cin>>x;
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            cout<<"element found\n";
            break;
        }
    }
}