#include <iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Enter the percentage of student:";
    cin>>a;
    if(a>90)
    {
        cout<<"Excellent";
    }
    else if(a>80)
    {
        cout<<"very good";
    }
    else if(a>40)
    {
        cout<<"good";
    }
    else
    {
        cout<<"failed in exam";
    }

}