#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Output:";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter element you want to search:";
    cin>>x;
    bool flag=false;//false--->> element  not present.

    for(int i=0;i<=n-1;i++){
        if(arr[i]==x)
        flag=true;
    }
    if(flag==true)
    cout<<"Element present in given array.";
    else cout<<"404 error element not found.";
    

}