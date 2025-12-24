#include <iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the rows:";
    cin>>m;
    int n;
    cout<<"Enter the columns:";
    cin>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {cout<<(char)(i+64)<<" ";}//A=65
        cout<<endl;
        
    }
}