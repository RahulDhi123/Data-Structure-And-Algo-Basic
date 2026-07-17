#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter number of rows\n";
cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            if(j>i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        
        for(int k=0;k<n-1;k++){
            if(k<i){
                cout<<"*"; 
                       }
                       else{
                        cout<<" ";
                       }


        }

        cout<<endl;


    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }


        for(int k=n-1;k>=0;k--){
            if(k>i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}