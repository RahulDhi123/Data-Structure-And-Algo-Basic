// ARITHMETIC PROGRESSION

#include<iostream>
using namespace std;

void a_p(int a,int d,int n){
    for(int i=1;i<=n;i++){
        int term=a+(i-1)*d;
        cout<<term<<endl;
    }

}
int main(){
    int a;
    cout<<"enter 1st term\n";
    cin>>a;

    int d;
    cout<<"enter common difference\n";
    cin>>d;

    int n;
    cout<<"enter number of terms\n";
    cin>>n;


    a_p(a,d,n);


}