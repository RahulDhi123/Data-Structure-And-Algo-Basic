// vectors

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,3};
    // vector <int> vec(3,0); means vector have 3 elements having value 0 each
    vec.push_back(5);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }


}