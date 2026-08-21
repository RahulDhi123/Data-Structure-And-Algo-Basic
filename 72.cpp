// CONSTRUCTOR

// SPECIAL METHOD INVOKED AUTOMATICALLY AT A TIME OF OBJECT CREATION. USED FOR INITIALISATION

// SAME NAME AS CLASS
// CONSTRUCTOR DOES NOT HAVE RETURN TYPE
// ONLY CALLED ONCE(AUTOMATICALLY) AT TIME OF OBJECT CREATION
// MEMORY ALLOCATION HAPPENS WHEN CONSTRUCTOR IS CALLED


// THERE CAN BE PARAMETERISED OR NON PARAMETERISED CONSTRUCTORS OR COPY CONSTRUCTOR

#include<iostream>
#include<string>

using namespace std;

class Teacher{
 public:
     Teacher(){
         dept="EE";
     }

public:
    Teacher(string n,string d,string sub,int s){
        name=n;
        dept=d;
        subject=sub;
        sal=s;
    }
public:
    string name;
    string dept;
    string subject;
    int sal;

    void getInfo(){
        cout<<name<<endl<<dept<<endl<<subject<<endl<<sal<<endl;
    }

};


int main(){
    Teacher t1("nandi","ee","mi",80000);
    // cout<<t1.dept<<endl;
    t1.getInfo();
}