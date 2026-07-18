// Vector(STL)

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <int> v={1,2,3,4,5};

    int size=v.size();

    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
    }

    cout<<"element at index 3:"<<v.at(3)<<endl;
    cout<<"front element:"<<v.front()<<endl;
    cout<<"last element:"<<v.back()<<endl;
    cout<<"empty or not:"<<v.empty()<<endl;


    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    cout<<"capacity:"<<v.capacity()<<endl;


    v.pop_back();

    for(int j=0;j<v.size();j++){
        cout<<v[j]<<endl;
    }


    v.erase(v.begin(),v.begin()+3);

    for(int i=0;i<v.size();i++){
cout<<v[i]<<endl;
    }
}