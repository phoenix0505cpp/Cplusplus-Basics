#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number n:";
    cin>>n;
    int esum=0;
    while(n!=0)
    {
        int ld=n%10;
        if(ld%2==0)
        esum+=ld;
        n=n/10;
    }
    cout<<esum;
}
