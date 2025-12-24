#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<=(n-1);i++){
        cin>>arr[i];
    }
    cout<<"Output:";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}