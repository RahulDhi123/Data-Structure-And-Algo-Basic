// OOPS

// OBJECTS ARE ENTITIES IN REAL WORLD 
// CLASS IS A BLUEPRINT OF THESE ENTITIES

// ACCESS MODIFIER

// PRIVATE: CAN'T ACCESS METHODS AND PROPERTIES OUTSIDE CLASS.
// PUBLIC:  CAN BE ACCESSED INSIDE OR OUTSIDE THE CLASS.
// PROTECTED: CAN BE ACCESSED IN CLASS AND INSIDE DERIVED CLASS.


#include<iostream>
#include<string>

using namespace std;






class Teacher{
private:
     int salary;



public:
   // properties,attributes
   string name;
   string dept;
   string subject;
  


   // methods

   void changeDept(string newDept){
    dept=newDept;
   }

   // setter
   void setSal(int s){
    salary=s;
   }

   // getter

   void getSal(){
    cout<<salary<<endl;
   }
};








int main(){
Teacher T1;


T1.name="nandi";
T1.subject="MI";
T1.dept="EE";
// T1.salary=90000;   gives error 

cout<<T1.name<<endl;
T1.setSal(100000);
T1.getSal();            // we can access private properties by using getter and setter....
}