#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter m and n:";
    cin>>m>>n;
    int temp=m;
    m=n;
    n=temp;
    cout<<m<<" "<<n;
    
}