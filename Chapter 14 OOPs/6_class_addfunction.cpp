#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    bool alive;

    public:
    void setScore(int score){
        this->score=score;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setIsAlive(bool alive){
        this->alive=alive;
    }
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
    bool getIsAlive(){
        return alive;
    }

};
int addScore(Player a,Player b){
    return a.getScore()+b.getScore();
}
int main(){
    Player pankaj;
    pankaj.setIsAlive(true);
    pankaj.setScore(100);
    pankaj.setHealth(90);

    pankaj.getIsAlive();
    pankaj.getHealth();
    pankaj.getScore();

    Player ashok;
    ashok.setIsAlive(true);
    ashok.setScore(120);
    ashok.setHealth(10);

    ashok.getIsAlive();
    ashok.getHealth();
    ashok.getScore();


    cout<<addScore(pankaj,ashok);
}