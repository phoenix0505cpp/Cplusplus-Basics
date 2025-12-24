#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string:";
    cin>>str;
    int max=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int count=1;
        for(int j=i+1;j<str.length();j++){
            if(str[j]==str[i]) count++;
        }
        if(max<count) max=count;
    }
    // cout<<max;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int count=1;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]) count++;
        }
        if(count==max) {
            cout<<ch<<"-> "<<max<<endl;
        }
    }
}