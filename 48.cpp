// Queue(STL)

#include<iostream>
#include<queue>


using namespace std;
int main(){
    queue<string>q;


    q.push("jashan");
    q.push("preet");
    q.push("dhingra");

    cout<<"first element:"<<q.front()<<endl;
    q.pop();
    cout<<"first element:"<<q.front()<<endl;

}