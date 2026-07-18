// Stack(STL)


#include<iostream>
#include<stack>

using namespace std;
int main(){

stack <string> s;

s.push("jashan");
s.push("Preet");
s.push("Dhingra");

cout<<"top element:"<<s.top()<<endl;
s.pop();
cout<<"top element:"<<s.top()<<endl;

cout<<"empty or not:"<<s.empty()<<endl;

}