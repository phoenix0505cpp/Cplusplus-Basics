#include <iostream>
using namespace std;
int main(){
    //method 1
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)//spaces
        {
            cout<<"- ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<k<<" " ;
        }
        cout<<endl;
    }
    //method
    cout<<endl;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j>=n+1)
            cout<<j<<" ";
            else
            cout<<"  ";
        }
        
        cout<<endl;
    }
}
