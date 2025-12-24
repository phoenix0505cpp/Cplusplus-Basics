#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="Raghav is maths teacher. He is a DSA mentor.";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    cout<<endl;
sort(v.begin(),v.end());
int maxcount=1;
int count=1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count=1;
    maxcount=max(maxcount,count);
    
}
// cout<<maxcount;
count=1;
for(int i=1;i<v.size();i++){
    if(v[i]==v[i-1]) count++;
    else count++;
    if(count==maxcount){
        cout<<v[i]<<" "<<maxcount<<endl;
    }
}
}