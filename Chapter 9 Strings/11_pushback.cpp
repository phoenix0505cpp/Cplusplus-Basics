#include<iostream>
#include<string>
// #include<vector>
using namespace std;
int main(){
    string str="abcd";
    cout<<str<<endl;
    //push_back elements
    str.push_back('e');
    str.push_back('f');
    cout<<str<<endl;
    //pop_back elements
    str.pop_back();
    cout<<str;

}