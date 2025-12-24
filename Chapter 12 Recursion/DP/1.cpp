#include <iostream>
// #include <bits/stdc++.h>
#include<vector>
#define inf INT_MAX
using namespace std;
vector<int>dp;
int ftd(int n){
    if(n==1) return 0;
    if(n<=3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=1+min({ftd(n-1),(n%2==0) ? ftd(n/2) : inf, (n%3==0) ? ftd(n/3) : inf});
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;//n->1000
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);
    cout<<ftd(n)<<endl;
    

    return 0;
}