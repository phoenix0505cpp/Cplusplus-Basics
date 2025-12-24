#include<iostream>
using namespace std;
class Cricketer{
    public:
    char name;
    int age;
    int noOfTestMatches;
    int avgScore;
};
int main(){
    Cricketer virat;
    virat.name='V';
    virat.age=35;
    virat.noOfTestMatches=52;
    virat.avgScore=57;

    Cricketer dhoni;
    dhoni.name='D';
    dhoni.age=48;
    dhoni.noOfTestMatches=65;
    dhoni.avgScore=55;

    
    Cricketer cricketers[2]={virat,dhoni};

    for(int i=0;i<2;i++){
       cout<<cricketers[i].name<<endl;
       cout<<cricketers[i].age<<endl;
       cout<<cricketers[i].noOfTestMatches<<endl;
       cout<<cricketers[i].avgScore<<endl;
        
    }
}
