// STATIC MEMBER FUNCTION

#include<iostream>
using namespace std;

class sample{
public:
    static int a;
    int b=4;
    static void show(){
        cout<<a<<endl;
    }
    static void s(){
        //cout<<b;     give error
    }
};
 int sample::a=4;

int main(){
     sample s1;
     sample::show();
     
}

