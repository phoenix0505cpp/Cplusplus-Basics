#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {int a=1;

        for(int j=1;j<=2*n-1;j++)
        {
            cout<<a<<" ";
        }
        a++;
        for(int k=1;k<=n+1-i;k++)
        {cout<<a;}
        cout<<endl;
    }

}