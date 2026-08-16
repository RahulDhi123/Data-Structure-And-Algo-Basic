// MATHS FOR DSA

// COUNTING PRIME NUMBERS UPTO N (OPTIMIZED CODE)

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:\n";
    cin>>n;

    int count=0;
    vector <int> prime(n+1,1);

    prime[0]=0;
    prime[1]=0;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;

            for(int j=i*2;j<n;j=j+i){
                prime[j]=0;
            }
        }


        
    }

    cout<<endl;
    cout<<count;
}