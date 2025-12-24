#include<iostream>
using namespace std;
class Book{
    public:
    char name;
    int price;
    int nop;

    int countBooks(int p){
        if(price<p) return 1;
        else return 0;
    }
     bool isBookPresent(char book){
        if(name==book) return true;
        else return false;
     }
};
int main(){
    Book harrypotter;
    harrypotter.name='H';
    harrypotter.price=05;
    harrypotter.nop=55;
    cout<< harrypotter.countBooks(10)<<endl;
    cout<<harrypotter.isBookPresent('p');
}