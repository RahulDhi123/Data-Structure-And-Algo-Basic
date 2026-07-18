// Set(STL)


#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int>s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(0);


    cout<<s.size()<<endl;


    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;

    auto it=s.begin();
    it++;

    s.erase(it);


    for(int i:s){
        cout<<i<<endl;
    }
}