#include<iostream>
using namespace std;
class Player{
private:
    int score;
    int health;
public:
    //setter
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;

    }
    //getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }

};
int main(){
    Player pankaj;
    pankaj.setScore(55);
    cout<<pankaj.getScore()<<endl;
    pankaj.setHealth(100);
    cout<<pankaj.getHealth()<<endl;

    Player ashok;
    ashok.setHealth(200);
    ashok.setScore(28);
    cout<<ashok.getHealth()<<'\n';
    ashok.getScore()<<endl;


}