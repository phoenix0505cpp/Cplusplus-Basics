#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter size of vector:";
    cin>>n;
    cout<<"Enter vector elements:";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    //reverse
    int i=0;
    int j=n-1;
    while(i<j){
        //swap v[i] and v[j]
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }
    display(v);

}

