#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,7);//each element has value 7.
    int size=v.size();
    cout<<"Size:"<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}