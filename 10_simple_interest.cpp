#include <iostream>
using namespace std;
int main()
{
    float s,p,r,t;
    cout<<"enter the principal amount:";
    cin>>p;
    cout<<"Enter the time period in years:";
    cin>>t;
    cout<<"Enter the rate:";
    cin>>r;
    cout<<"Simple Interest="<<(p*r*t)/100;

}