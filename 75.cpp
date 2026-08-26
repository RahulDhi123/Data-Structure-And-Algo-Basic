// SPARSE MATRIX(ADDITION)

#include<iostream>
using namespace std;

int main(){
    int S1[5][3];
    int m;
    cout<<"enter number of rows of sparse 1:\n";
    cin>>m;


    int n;
    cout<<"enter number of column of sparse 1:\n";
    cin>>n;


    int num1;
    cout<<"enter number of non zero elements in sparse1:\n";
    cin>>num1;


      int S2[5][3];
    int p;
    cout<<"enter number of rows of sparse 2:\n";
    cin>>p;


    int q;
    cout<<"enter number of column of sparse 2:\n";
    cin>>q;


    int num2;
    cout<<"enter number of non zero elements in sparse 2:\n";
    cin>>num2;

    S1[0][0]=m;
    S1[0][1]=n;
    S1[0][2]=num1;


    S2[0][0]=p;
    S2[0][1]=q;
    S2[0][2]=num2;

    cout<<"Filling Sparse 1:\n";
    for(int i=1;i<=num1;i++){
        cout<<"enter row:\n";
        cin>>S1[i][0];

        cout<<"enter column:\n";
        cin>>S1[i][1];


        cout<<"enter element:\n";
        cin>>S1[i][2];

    }


     cout<<"Filling Sparse 2:\n";
    for(int i=1;i<=num2;i++){
        cout<<"enter row:\n";
        cin>>S2[i][0];

        cout<<"enter column:\n";
        cin>>S2[i][1];


        cout<<"enter element:\n";
        cin>>S2[i][2];

    }


    cout<<"R  C  V\n";
    for(int i=0;i<num1;i++){
        for(int j=0;j<2;j++){
            cout<<S1[i][j]<<"  ";
        }
        cout<<endl;
    }
}