#include<iostream>
using namespace std;

 int gcdOfOddEvenSums(int n) {
        int odd=0;
        int even=0;
        int count=0;

         int i=1;
            int j=2;

        while(count<n){
           

            odd=odd+i;
            even =even+j;

            i=i+2;
            j=j+2;

            count++;
        }

        cout<<odd<<endl<<even<<endl;
    }


    int main(){
        gcdOfOddEvenSums(4);
    }