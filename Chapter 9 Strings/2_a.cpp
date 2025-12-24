#include<iostream>
using namespace std;
int main(){
    char str[]={'a','f','\0','e','t','q'};
    for(int i=0;str[i]!='e';i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str<<" ";
}