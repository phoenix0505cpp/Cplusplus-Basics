#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
bool comp(pair<int,int>&p,pair<int,int>&q){
    double r1=(p.first*1.0)/(p.second*1.0);
    double r2=(q.first*1.0)/(q.second*1.0);
    return r1>r2;

}
double fractionalKnapsack(vector<int>&profits,vector<int>&weights,int w,int n){
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back({profits[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),comp);
    double result=0;
    for(int i=0;i<n;i++){
        if(arr[i].second<=w){
            result+=arr[i].first;
            w-=arr[i].second;
        }
        else{
            if(w==0) break;
            result+=((arr[i].first*1.0)/(arr[i].second*1.0))*w;

        }
    }
    return result;
}
    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int>profits={60,100,120},weights={10,20,30};
    int w=50,n=3;
    cout<<fractionalKnapsack(profits,weights,w,n);
    
}