//  CHARACTER ARRAY

#include<iostream>
using namespace std;
int main(){
    char str[20]; // initialising character array
    cout<<"ENTER A STRING:"<<endl;

    cin>>str;     // taking input
    cout<<str<<endl;    // printing output
    cout<<endl;

    // ACTUALLY STRING IS A CHARACTER ARRAY WHICH TERMINATE WITH NULL CHARACTER

    char name[30];
    cout<<"ENTER YOUR NAME:"<<endl; // if you enter rahul dhingra  you will get only rahul in the output
    cin>>name;
    cout<<endl;

    cout<<"YOUR NAME IS:"<<name<<endl;

}