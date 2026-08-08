


#include<iostream>
using namespace std;
int steps(int n,int i){
    
    int count=0;
    if(n==0){
        return 0;
    }
    if(i==0){
        return 0;
    }

    if(n%i==0){
        count++;
        return steps(n,i-1);
    }

}