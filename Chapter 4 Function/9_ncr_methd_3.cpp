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
    cout<<"Enter n and r:";
    cin>>n>>r;
    int ncr=comb(n,r);
    cout<<ncr;
}