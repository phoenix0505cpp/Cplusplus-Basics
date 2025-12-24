#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
        v.push_back(8);
        v.push_back(5);  
        v.push_back(3);

        v.at(1)=90;//use to change value.

        cout<<v.at(1)<<endl;//can print by this way also.

        cout<<v[2]<<endl;
        

}