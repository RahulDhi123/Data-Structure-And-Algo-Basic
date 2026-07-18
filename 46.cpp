// List(STL)


#include<iostream>
#include<list>

using namespace std;
int main(){


    list<int> l;
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<endl;
    }

    l.erase(l.begin());

    for(int i:l){
        cout<<i<<endl;
    }


    list <int> L(5,100);

    for(int i:L){
        cout<<i<<endl;
    }


    cout<<"empty or not:"<<L.empty()<<endl;

    cout<<"front element:"<<L.front()<<endl;
    cout<<"Last element:"<<L.back()<<endl;

    auto it=next(L.begin(),3);  // element at third index;

    cout<<*it<<endl;



}