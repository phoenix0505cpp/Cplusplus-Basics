#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    cin>>n>>k;
    string s;
    for(int i=0;i<n;i++){
    cin>>s[i];
    }
    string p;
    for(int i=0;i<k;i++){
    cin>>p[i];
    }
    int count=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
    if(s[j]==p[i]) {
        count++;
        break;}
}}
    cout<<count;
    return 0;
}
