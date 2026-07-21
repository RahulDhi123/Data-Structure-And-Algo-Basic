// REVERSE A STRING

#include<iostream>
using namespace std;

int length(char name[]){
     int count=0;
    int i=0;
    while(name[i]!='\0'){
        count++;
        i++;
    }
    return count;
}


void reverse(char name[],int size){
    int st=0;
    int end=size-1;
    while(st<end){
        swap(name[st],name[end]);
        st++;
        end--;
    }
}
int main(){

    char name[30];
    cout<<"enter a string:\n";
    cin>>name;

    int len=length(name);
    reverse(name,len);


    cout<<name;

}