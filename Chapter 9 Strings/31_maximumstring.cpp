#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"0123","0023","002134","1235"};
    int max=stoi(arr[0]);
    string maxS=arr[0];
    for(int i=0;i<4;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
        }
    }
    cout<<maxS;
}
