// LEETCODE: 1207 UNIQUE NUMBER OF OCCURENCE

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  vector<int> v={1,1,2,2,2,3,3,3,3};
  sort(v.begin(),v.end());
  vector<int>ve;

  int count=1;
  for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]){
        count++;
    }
    else{
        ve.push_back(count);
        count=1;
    }
  }
     ve.push_back(count);

  sort(ve.begin(),ve.end());

  bool isUnique=true;

  for(int i=1;i<ve.size();i++){
    if(ve[i]==ve[i-1]){
        isUnique=false;
        break;
    }
  }

 return isUnique;
}