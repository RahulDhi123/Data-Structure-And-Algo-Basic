// DEQ(STL)

#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque <int> d={3,4,5};
    d.push_back(6);
    d.push_back(7);
    d.push_front(2);
    d.push_front(1);


    for(int i=0;i<d.size();i++){
        cout<<d[i]<<endl;
    }


    d.pop_back();
    d.pop_front();


    cout<<endl;

    for(int i=0;i<d.size();i++){
        cout<<d[i]<<endl;
    }


    cout<<"empty pr not:"<<d.empty()<<endl;
    cout<<"element at second index:"<<d.at(2)<<endl;
    cout<<"front element:"<<d.front()<<endl;
    cout<<"last element:"<<d.back()<<endl;


    d.erase(d.begin(),d.begin()+3);

    for(int i=0;i<d.size();i++){
        cout<<d[i]<<endl;
    }
}