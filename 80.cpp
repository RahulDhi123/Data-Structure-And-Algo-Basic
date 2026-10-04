#include<stdio.h>
#include<string.h>
#define MAX 10

char stack[MAX];
int top=-1;


void push(char ch){
    stack[++top]=ch;
}

char pop(){
    return stack[top--];
}
int main(){
    char str[MAX];
    printf("enter a string\n");
    gets(str);

    for(int i=0;i<strlen(str);i++){
        push(str[i]);
    }

    for(int i=0;i<strlen(str);i++){
        str[i]=pop();
    }

   printf("%s",str);

   printf("\n");
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }



}