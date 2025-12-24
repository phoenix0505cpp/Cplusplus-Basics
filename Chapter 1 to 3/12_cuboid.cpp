#include <iostream>
using namespace std;
int main()
{
    float l,b,h;
    // Cube
    cout<<"Enter the length of cuboid in meter:";
    cin>>l;
    cout<<"Enter the breadth of cuboid in meter:";
    cin>>b;
    cout<<"Enter the height of cuboid in meter:";
    cin>>h;
    cout<<endl;
    cout<<"Volume of cuboid = "<<l*b*h<<" meter cube" <<endl;
cout<<"Curved Surface Area of Cuboid is = "<<2*h*(l+b)<<" meter square" <<endl;
cout<<"Total Surface Areaof Cuboid is = "<<2*(l*b+b*h+h*l) <<" meter square";



}