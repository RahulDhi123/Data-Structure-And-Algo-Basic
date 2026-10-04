// STATIC MEMBERS

#include<iostream>
using namespace std;

class sample{
    public:

        static int a;
        void show(){
            cout<<a<<endl;
        }

};

int sample::a=3;
sample s1,s2,s3;

int main(){
    s1.a+=1;
    s2.a+=1;
    s3.a+=1;
    s1.show();
}