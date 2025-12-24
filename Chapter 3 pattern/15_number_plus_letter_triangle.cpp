#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {if(n%2==0)
        {for(int j=1;j<=i;j++)
        {cout<<j<<" ";}
        cout<<endl;}
        else
        {
          for(int j=1;j<=i;j++)
        {cout<<(char)(j+64)<<" ";}
        cout<<endl;
        }
    }
}