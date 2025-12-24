#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the cost price of item:";
    cin>>x;
    cout<<"enter the selling price:";
    cin>>y;
    if(x>y)
    {
        cout<<"loss";

    }
    else if(x==y)
    {
        cout<<"neither profit nor loss";

    }
    else{
        cout<<"profit";
    }
}