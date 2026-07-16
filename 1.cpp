// PRINT THE TYPE OF ENTERED CHARACTER

#include<iostream>
using namespace std;
int main(){
    char x;
    cout<<"enter any character\n";

    cin>>x;

    if('a'<=x && x<='z'){
        cout<<"This is a lower case";
    }
    else if('A'<=x && x<='Z'){
        cout<<"this is upper case";
    }
    else if('0'<=x && x<='9'){
        cout<<"this is digit";
    }
    else{
        cout<<"this is a special character";

    }

}
