#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number :";
    cin>>x;
    int a=x;
    for(int i=1;i<=10;i=i+1)
    {
        
        cout<<x<<" "<<"x "<<i<<" "<<"= "<<a<<endl;
        // a=a+x;
        a=(i+1)*x;        
        }
      
        
    
}