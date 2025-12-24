#include <iostream>
using namespace std;
int main()
{
    float s,l,b,r;
    cout<<"square formulae "<<endl;

    cout<<"Enter the side of square: ";
    cin>>s;

    cout<<"Perimeter:"<<4*s<<endl;   
    cout<<"Area:"<<s*s<<endl;

    cout<<"Rectangle formulae:"<<endl;

     cout<<"Enter the length of rectangle:\n";
     cin>>l;
     cout<<endl;


     cout<<"Enter the breadth of rectangle:\n";
     cin>>b;
cout<<"Perimeter:"<<2*(l+b)<<endl;
cout<<"Area:"<<l*b<<endl;

cout<<"Circle formulae\n";
cout<<"Enter the radius of circle:";
cin>>r;
cout<<"Perimeter of circle:"<<2*3.14*r<<endl;
cout<<"Area:"<<3.14*r*r;


}