#include <iostream>
using namespace std;
int main()
{
    int m;
     cout<<"Enter the number of rows:";
     cin>>m;
     int n;
     cout<<"Enter the number of columns:";
     cin>>n;
     for(int i=1;i<=m;i++)//rows=m
     {
        for(int j=1;j<=n;j++)//columns=n
        {cout<<"* ";}
        cout<<endl;
     }

    
}