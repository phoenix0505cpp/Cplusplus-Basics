#include <iostream>
using namespace std;
void swap(int*x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=7,b=8;
    int *x=&a;
    int *y=&b;
    swap(a,b);
    cout<<a<<" "<<b;

}