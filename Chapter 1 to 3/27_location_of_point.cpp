#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the x-coordinate:";
    cin>>x;
    cout<<"Enter the y-coordinate:";
    cin>>y;
    if(x>0 && y>0)
    {
        cout<<"Point is in first quadrant.";
    }
    else if(x<0 && y>0)
    {
        cout<<"Point is in second quadrant.";
    }
    else if(x<0 && y<0)
    {
        cout<<"Point is in third quadrant.";
    }
    else if(x>0 && y<0)
    {
        cout<<"Point is in fourth quadrant.";

    }
    else if(x==0 && y!=0)
    {
      cout<<"Point is on y-axis.";
    }
    else if(y==0 && x!=0)
    {
        cout<<"Point is on x-axis.";
    }
    else
    {
        cout<<"Point is origin";
    }
}
