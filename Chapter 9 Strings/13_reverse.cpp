#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="abcdefgh";
    cout<<str<<endl;
    reverse(str.begin(),str.end());
    cout<<str;
}