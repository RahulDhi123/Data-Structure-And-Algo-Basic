// CHECK PALINDROME


#include<iostream>
#include<vector>
using namespace std;
int main(){
    char n[30];
    cout<<"enter a string:\n";
    cin>>n;

    int pal=1;

    int count=0;
    int i=0;
    while(n[i]!='\0'){
        count++;
        i++;
    }


    int st=0;
    int end=count-1;

    while(st<end){
        if(tolower(n[st])!=tolower(n[end])){
            pal=0;
            break;
        }
        st++;
        end--;
    }

    if(pal){
        cout<<"yes";
    }else{
        cout<<"no";
    }



}