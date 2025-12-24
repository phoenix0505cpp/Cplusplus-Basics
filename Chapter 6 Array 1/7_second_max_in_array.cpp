#include <iostream>
#include <climits>
using namespace std; 
int main(){
    int n;
    cout<<"Enter array size:";
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
    //int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && smax<arr[i])
        smax=arr[i];
    }
    cout<<"Maximum value in array:"<<max<<endl;
    cout<<"Second maximum value in array:"<<smax;

}