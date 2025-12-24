#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;

    
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    if(a>b)
    {       if(a>c)
            {cout<<a<<" is greatest number among three.";
            }
              else{
                cout<<c<<" is greatest among three.";
            }
        
    }
    else{
        if(c<b)
        {
            cout<<b<<" is greatest among three.";

        }
        else{
            cout<<c<<" is greatest among three.";
        }
    }
    return 0;
    }
