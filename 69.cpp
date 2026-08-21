// POINTERS

#include<iostream>
using namespace std;
int main(){
    int num=5;
    char ch='a';

    char *p2= &ch;
    cout<<"Address of variable is:"<<&num;
    cout<<endl;
    cout<<"Value of variable is:"<<num;
    cout<<endl;

    int *ptr=&num;
    cout<<"Address of varisble is:"<<ptr<<endl; 
    cout<<"Value of variable is:"<<*ptr<<endl;  // USING POINTER

    // HERE WE USE INT DATA TYPE WITH POINTER. IT IS BECAUSE POINTER IS POINTIN TO INTEGER VARIABLE. IF IT IS POINTED TO VARIABLE OF ANY OTHER DATA TYPE THEN WE HAVE TO INITIALISE POINTER WITH THAT DATA TYPE...


     cout<<"Size of integer is:"<<sizeof(num)<<endl;
     cout<<"Size of pointer is:"<<sizeof(ptr)<<endl;


     cout<<"Size of character is:"<<sizeof(ch)<<endl;
     cout<<"Size of pointer is:"<<sizeof(p2)<<endl;


    int *p=&num;
    int a=*p;
    a++;
    cout<<num<<endl;
    (*p)++;
    cout<<num<<endl;



    // COPYING A POINTER

    int *p4=&num;
    cout<<p4<<endl<<*p4<<endl;
    int *q=p4;
    cout<<q<<endl<<*q<<endl;


    // POINTER ARITHMETIC

    *p4++;
    cout<<num<<endl;;

    p4++;
    cout<<p4;
}