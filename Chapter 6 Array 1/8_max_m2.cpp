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
    
    int max=arr[0];
    for(int i=1;i<=n-1;i++){
    if(max<arr[i])
    max=arr[i];
    }
    cout<<"Maximum element:"<<max;

}