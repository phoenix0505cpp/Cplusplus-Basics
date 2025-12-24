#include <iostream> 
using namespace std;
class Bike{
    public:
    int tyresize;
    Bike(){
        cout<<"Constructor call ho rha h \n";
    }
};

int main() {
   Bike tvs;
// jab object create hoga utni baar constructor ko call jayegi
   Bike honda; 
    

    return 0;
}