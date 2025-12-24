#include <iostream>
using namespace std;
int main()
{
    int n;
    //GP--->  3,12,48...
    cout<<"Enter the number of term you want to print of gp:";
    cin>>n;
    int a=3;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" "<<endl;
        a=a*4;
    }
}