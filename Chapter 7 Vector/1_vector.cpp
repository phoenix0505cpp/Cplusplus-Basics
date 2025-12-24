#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(7);
    v.push_back(8);
     v.push_back(92);
    v.push_back(78);
    v.push_back(81);
    
    v[0]=100;// updating first element..
for(int i=0;i<=5;i++){
    cout<<v[i]<<" ";
}


}