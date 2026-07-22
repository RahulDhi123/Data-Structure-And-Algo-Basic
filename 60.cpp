// VALID PALINDROME(LEETCODE)

#include<iostream>
using namespace std;


bool isalpha(char s){
    if(s>='A' && s<='Z' ||  s>='a' && s<='z' || s>'0' && s<'9'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char s[30];
    cout<<"enter a string:\n";
    cin>>s;

      int count=0;
    int i=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }

    int st=0;
    int end=count-1;
    int pal=1;


    while(st<end){
        if( isalpha(s[st])  &&  isalpha(s[end])){
            if(tolower(s[st])!=tolower(s[end])){
                pal=0;
                break;
            }

        }

        if(isalpha(s[st]) && !(isalpha(s[end]))){
            end--;
        }


        if(isalpha(s[end]) && !(isalpha(s[st]))){
            st++;
        }
        else{
            st++;
            end--;
        }
    }


    if(pal){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}