// THIS PROPERTY IN CONSTRUCTOR

// THIS PROPERTY IS USE TO HIGHLIGHT OBJECT PROPERTY
// THIS IS A VARIABLE(AUTOMATICALLY CRAETED POINTER) WHICH POINTS TO OBJECT WHO CALLS IT.

#include<iostream>
#include<string>

using namespace std;

class Teacher{
 public:
     Teacher(){
         dept="EE";
     }

public:
    Teacher(string name,string dept,string subject,int sal){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->sal=sal;
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