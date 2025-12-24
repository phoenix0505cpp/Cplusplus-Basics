#include <iostream>
using namespace std;
int main(){
    int x=55;
    int*p=&x;
    cout<<x<<endl;
    *p=05;
    cout<<x;
}