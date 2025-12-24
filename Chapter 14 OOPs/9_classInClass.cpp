#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
    int score;
    int health;
    bool alive;
    Gun gun;

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
    void setGun(Gun gun){
        this->gun=gun;
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
    Gun getGun(){
        return gun;
    }

};


int main(){
    Gun akm;
    akm.ammo=140;
    akm.damage=40;
    akm.scope=3;

    Player pankaj;
    pankaj.setIsAlive(true);
    pankaj.setScore(100);
    pankaj.setHealth(90);
    pankaj.setGun(akm);

    pankaj.getIsAlive();
    pankaj.getHealth();
    pankaj.getScore();
    pankaj.getGun();

    cout<<pankaj.getGun().scope<<endl;//<<<<<<--------
    cout<<pankaj.getGun().damage;

    Gun awm;
    awm.ammo=123;
    awm.damage=23;
    awm.scope=8; 
    Player ashok;
    ashok.setIsAlive(false);
    ashok.setScore(120);
    ashok.setHealth(100);
    ashok.setGun(awm);

    ashok.getIsAlive();
    ashok.getHealth();
    ashok.getScore();
    ashok.getGun();
    


   



}