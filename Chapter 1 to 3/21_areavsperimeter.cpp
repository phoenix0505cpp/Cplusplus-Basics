#include <iostream>
using namespace std;
int main()
{
    int l,b,a,p;
    cout<<"enter the length of rectangle:";
    cin>>l;
    cout<<"enter the breadth of rectangle:";
    cin>>b;
    p=2*(l+b);
    a=l*b;
    cout<<"perimeter:"<<p<<endl;
    cout<<"area:"<<a<<endl;

    
    if(a>p){
        cout<<"area is greater than perimeter";

    }
    else{
        cout<<"perimeter is greater.";
    }

}