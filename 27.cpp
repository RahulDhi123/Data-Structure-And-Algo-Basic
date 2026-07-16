// FIND ALL DUPLICATES IN ARRAY LEETCODE 442
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={1,2,4,3,3,1,5,2,6};
    sort(v.begin(),v.end());
    vector<int> ve;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]){
            ve.push_back(v[i]);
        }
    }

    for(int i=0;i<ve.size();i++){
        cout<<ve[i]<<"\t";
    }
}
