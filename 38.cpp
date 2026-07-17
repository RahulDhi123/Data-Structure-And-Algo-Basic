// TWO SUM BETTER APPROACH

// TWO SUM BRUTE FORCE

#include<iostream>
#include<vector>
using namespace std;
vector<int> Sum(vector<int>&v,int target){
    vector<int>ans;
    int st=0;
    int end=v.size()-1;
    while(st<end){
    if(v[st]+v[end]==target){
        ans.push_back(st);
        ans.push_back(end);
    }
    if(v[st]+v[end]<target){
        st=st+1;
    }
    else{
        end=end-1;
    }
}
    return ans;
}

int main(){
    vector<int>v={1,3,2,4,8,9};
    int target=15;

    vector<int>vect=Sum(v,target);
    
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<"\t";
    }
}
