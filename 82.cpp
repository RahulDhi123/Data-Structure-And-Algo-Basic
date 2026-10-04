// USING OBJECT OF ONE CLASS TO OTHER CLASS

#include<iostream>
using namespace std;

class even{
public:
    int a=4;
    int b=8;
};
even e1;


class odd{
public:
    int c=3;
    int d=5;
    void show(){
        cout<<e1.a;
        cout<<endl;
        
};
};

int main(){
    odd o1;
    o1.show();
}


