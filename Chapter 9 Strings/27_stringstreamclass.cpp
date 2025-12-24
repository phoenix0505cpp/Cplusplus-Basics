#include<iostream>
#include<string>
#include<sstream>//<<<<------
using namespace std;
int main(){
    string str="Pankaj Agrawal is in NIT Trichy (Tamil Nadu)";
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }
}