#include <iostream>
using namespace std;
int main(){
    int x,y;
    int* p1=&x,*p2=&y;
    // int*p2=&y;
    cout<<"Enter 1 number:";
    cin>>*p1;
    cout<<"Enter 2 number:";
    cin>>*p2;
    cout<<*p1 + *p2;
}