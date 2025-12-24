#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="abcdef";
    int len=str.size();
    cout<<str<<endl;
    reverse(str.begin()+1,str.begin()+len/2);
    cout<<str;
}