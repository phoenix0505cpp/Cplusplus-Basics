#include <iostream>
using namespace std;
int main()
{
    // method 1 to print counting 1 to 20 except numbers 3 and 8 with the help of if.
    for(int i=1;i<=20;i++)
    {
        if(i!=3 && i!=8)
        cout<<i<<" ";
    }
}
