#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    // ap 4,7,10...
    int a=4;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        a=a+3;
    }
}