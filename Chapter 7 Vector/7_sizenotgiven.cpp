#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Enter vector elements:";
    for(int i=0;i<7;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Output:";
    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }

}