#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x,ans=0;
    cout<<"enter the number:";
    cin>>x;
    for(int i=0; i<=x/2;i++)
    {
if(pow(2,i)==x)
{
ans=1;
}
    }
    cout<<ans;
    return 0;
}




