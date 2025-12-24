#include <iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter n:";
    cin>>n;
     cout<<"Enter r:";
    cin>>r;

    int nfact=1;
    for(int i=2;i<=n;i++)
    {
        nfact*=i;
    }
    int rfact=1;
    for(int j=2;j<=r;j++)
    {
        nfact*=j;
    }
    int nrfact=1;
    for(int k=2;k<=(n-r);k++)
        {
            nrfact*=k;
        }
    
    int ncr=nfact/(rfact*nrfact);
    cout<<ncr;

}
