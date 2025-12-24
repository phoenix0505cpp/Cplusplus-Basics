#include <iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f*=i;
    }
    return f;
}
int comb(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        //spaces
        for(int i=0;i<=(n-i);i++){
            cout<<"__";
        }
        // numbers
        for(int j=0;j<=i;j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}