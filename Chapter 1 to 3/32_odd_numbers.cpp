#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the last number till you want to print odd number :";
    cin>>n;
    for(int i=1;i<=n;i=i+2)
    {
        cout<<i<<" ";
    }
}