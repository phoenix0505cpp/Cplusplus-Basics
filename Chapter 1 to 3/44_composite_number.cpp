#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<n;i++)//not working for 0,1,2.
    {
        if(n%i==0)
        {cout<<"Composite number.";
        break;
        }
        
        
        else if(n==1)
        {cout<<"Neither composite nor prime.";
        break;
        }
        
        else
        {cout<<"Number is prime.";
        break;
    }
        
    }
}