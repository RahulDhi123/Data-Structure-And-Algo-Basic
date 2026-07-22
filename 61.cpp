// KEY DIFFERENCE BETWEEN CHARACTER ARRAY AND STRING

#include<iostream>
#include<string>
using namespace std;
int main(){
   
    // CHARACTER ARRAY

    char name[30]="rahul";  // STORES CHARACTER IN A FIXED SIZE ARRAY AND ENDS WITH A NULL CHARACTER
    cout<<name<<endl;


    // STRING

    string name2="rahul";    // AUTOMATICALLY MANAGE MEMORY AND CAN GROW AND SHRINK IF NEEDED
    cout<<name2;



//   char name[20] = "Rahul";
//   name = "Aman";    // Error



//   strcpy(name, "Aman"); // this is right way to update char array



// string name = "Rahul";
// name = "Aman";     // Works




// char a[20] = "Hello ";
// char b[] = "World";

// strcat(a, b);

// cout << a;




// string a = "Hello ";
// string b = "World";

// cout << a + b;