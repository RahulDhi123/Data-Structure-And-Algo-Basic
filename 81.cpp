// MEMBERS FUNCTION DEFINED OUTSIDE

#include<iostream>
using namespace std;

class sample{
    public:
        static int b;

        void show();
};

int sample::b=9;
void sample::show(){                // outside the class but should be inside the main
    cout<<b<<endl;
}


int main(){

    sample s1;
    s1.b++;
    s1.show();

}
