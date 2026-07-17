// TWO SUM BRUTE FORCE

#include<iostream>
#include<vector>
using namespace std;
vector<int> Sum(vector<int>&v,int target){
    vector<int>ans;
    for(int i=0;i<v.size();i++){
        int first=i;
        for(int j=i+1;j<v.size();j++){
            int second=j;

            if(v[first]+v[second]==target){
                ans.push_back(first);
                ans.push_back(second);
            }
        }
       
    }
    return ans;
}

int main(){
    vector<int>v={1,3,2,4,8,9};
    int target=7;

    vector<int>vect=Sum(v,target);
    
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<"\t";
    }
}
