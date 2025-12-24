#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter target number:";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>=x) count++; 
    }
    cout<<count;
}