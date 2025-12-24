#include <iostream> 
using namespace std;
int main()
{
    char ch;
    cout<<"Enter data type :"; 
    cin>>ch;
    if((ch>='A' and ch<='Z') || (ch>='a' and ch<='z'))
    cout<<"Character is alphabet.";
    else if( ch>='0' or ch<='9')
    cout<<"character is number.";
    else 
    cout<<"Special character.";// not working.
    
    return 0;

}
