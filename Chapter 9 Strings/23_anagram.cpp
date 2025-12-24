//leetcode 242
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"Enter string 1:";
    cin>>str1;
    string str2;
    cout<<"Enter string 2:";
    cin>>str2;
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2) cout<<true;
    else cout<<false;

}