#include <iostream>
using namespace std;
void startri(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int x;
    cout<<"Enter x:";
    cin>>x;
    startri(x);
}
 