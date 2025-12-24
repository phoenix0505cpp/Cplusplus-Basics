#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    int r=0;
    while(n!=0)
    {
        r*=10;
        int ld=n%10;
        r+=ld;
        n/=10;


    }
    cout<<r;

}