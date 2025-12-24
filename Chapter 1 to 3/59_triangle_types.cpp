#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if(x==y and x==z)
    {
        cout<<"equilateral triangle.";

    }
    else if((x==y and x!=z) || (y==z  and y!=x) || (z==x and z!=y))
    {
        cout<<"isosceles triangle.";

    }
    else
    cout<<"scalen triangle";
}