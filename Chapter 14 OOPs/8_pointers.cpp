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

int main(){
    Player *golu=new Player;// runtime dynamic allocation
    Player goluObject=*golu;
    
   golu->setHealth(120);
   cout<<golu->getHealth();
    
}