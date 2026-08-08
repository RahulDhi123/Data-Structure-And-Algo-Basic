// GETTER AND SETTER TO ACCESS  PRIVATE METHODS AND VARIABLES

#include<iostream>
using namespace std;

class hero{
    private:
    int health=90;
    public:
    int level =3;

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;

    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(int l){
        level=l;
    }
};


int main(){
    hero h1;

    cout<<h1.getHealth()<<endl;
    

    cout<<h1.getLevel()<<endl;
    h1.setHealth(83);
    h1.setLevel(6);


     cout<<h1.getHealth()<<endl;
    

    cout<<h1.getLevel()<<endl;

    cout<<"size:"<<sizeof(h1)<<endl;

}