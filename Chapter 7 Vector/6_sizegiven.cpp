#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v(8);//size given
cout<<"Enter vector elements:";
for(int i=0;i<8;i++){
    cin>>v[i];
}
cout<<"Output:";
for(int i=0;i<8;i++){
    cout<<v[i]<<" ";
}
}