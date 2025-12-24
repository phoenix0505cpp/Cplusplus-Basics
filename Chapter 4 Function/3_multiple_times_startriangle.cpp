#include<iostream>
using namespace std;
void startri(int x){
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    cout<<"Enter x1:";
    cin>>x;
    startri(x);
    cout<<endl<<endl;
    cout<<"Enter x2:";
    cin>>x;
    startri(x);
}