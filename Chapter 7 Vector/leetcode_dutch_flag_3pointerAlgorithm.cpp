// 3 pointer algorithm
//Leetcode 75 question
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void sortm3(vector<int>&v){
    int lo=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){
        //swap mid and hi
        if(v[mid]==2) 
    {
        int temp=v[mid];
        v[mid]=v[hi];
        v[hi]=temp;
        hi--;
    }
    else if(v[mid]==0){
        //swaps mid and lo;
         int temp=v[mid];
        v[mid]=v[lo];
        v[lo]=temp;
        lo++;
        mid++;
    }
    else mid++;
    }

}
int main(){
     vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);

    display(v);

    sortm3(v);

    display(v);

}