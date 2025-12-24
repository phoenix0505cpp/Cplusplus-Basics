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
    return a.getScore() + b.getScore();
}
Player getMaxScorePlayer(Player a,Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
// This function:
	// •	Compares only the score
	// •	Then returns the entire Player object that has the higher score
// That returned object still has all its original attributes — score, health, and alive.
int main(){
    Player pankaj;
    pankaj.setIsAlive(true);
    pankaj.setScore(100);
    pankaj.setHealth(90);

    pankaj.getIsAlive();
    pankaj.getHealth();
    pankaj.getScore();

    Player ashok;
    ashok.setIsAlive(false);
    ashok.setScore(120);
    ashok.setHealth(100);

    ashok.getIsAlive();
    ashok.getHealth();
    ashok.getScore();


    // cout<<addScore(pankaj,ashok)<<endl;
    Player winner=getMaxScorePlayer(pankaj,ashok);
    cout<<winner.getHealth()<<endl;
    cout<<winner.getScore()<<endl;
    cout<<winner.getIsAlive();
    



}