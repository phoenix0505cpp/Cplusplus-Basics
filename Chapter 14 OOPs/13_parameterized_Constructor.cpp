#include <iostream> 
using namespace std;
class Bike{
    public:
    int tyresize;
    int enginesize;
    Bike(int tyresize,int enginesize){
        // cout<<"Constructor call ho rha h \n"; 
        this->tyresize=tyresize;
        this->enginesize=enginesize;
    }
};

int main() {
   Bike tvs(12,55);
    cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
   Bike honda(23,55); 
   cout<<honda.tyresize<<" "<<honda.enginesize;

    

    return 0;
}