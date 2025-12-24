#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    reverse(str.begin()+1,str.begin()+5);
    cout<<str;
}