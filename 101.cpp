// OOPS

// OBJECT IS A ENTITY HAVING STATE/PROPERTIES AND BEHAVIOUR

#include<iostream>
using namespace std;

// class hero{
//     int health=100;
//     int level=3;

//     void eat(){
//         cout<<"eat\n";
//     }
// };


// int main(){
//     hero h1;
//     cout<<h1.health<<endl;   it will give error
// }








//  class hero{
//      public:
//      int health=100;
//      int level=3;

//      void eat(){
//          cout<<"eat\n";
//      }
//  };



//  int main(){
//     hero h1;
//     cout<<h1.health<<endl;
//     cout<<h1.level<<endl;
//     h1.eat();
//  }





 class hero{
     private:
     int health=100;
     public:                         // NOW YOU CAN'T EXCESS HEALTH OUTSIDE THE HEALTH
     int level=3;

     void eat(){
         cout<<"eat\n";
     }
 };

