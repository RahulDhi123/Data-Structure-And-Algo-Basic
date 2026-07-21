// FIND LENGTH OF STRING


#include<iostream>
using namespace std;
int main(){
    char name[30];
    cout<<"enter your name:\n";
    cin>>name;

    int count=0;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    cout<<"your name has "<<count<<" letters";
}