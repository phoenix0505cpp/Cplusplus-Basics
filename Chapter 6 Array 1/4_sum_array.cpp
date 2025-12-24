#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" + ";
        sum+=arr[i];

    }
    cout<<"="<<sum;
}