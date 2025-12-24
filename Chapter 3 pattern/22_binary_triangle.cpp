#include <iostream>
using namespace std;
int main()
{//method 1 using extra variables.
    int n;
    cout<<"Enter the number of rows";
    cin>>n;
    int a;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        a=1;
        else
        a=0;
        for(int j=1;j<=i;j++)
        {
            cout<<a;
        if(a==1)
        a=0;
        else
        a=1;
        }
        cout<<endl;
    }
    //method 2
    // int n;
    // cout<<"Enter the number of rows";
    // cin>>n;
    // int a;
    for(int i=1;i<=n;i++)
    {
        
        for(int j=1;j<=i;j++)
        {
       if((i+j)%2!=0)
       cout<<0;
       else
       cout<<1;
        }
        cout<<endl;
    }

}