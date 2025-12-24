#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
if(a<b){
    if(a<c)
    {
        cout<<a<<" is least number.";
    }
    else
        {
        cout<<c<<" is least.";
        }
}
else
{
    if(b>c)
    {
        cout<<c<<" is least.";
    }
    else
    {
        cout<<b<<" is least.";
    }
}
}

