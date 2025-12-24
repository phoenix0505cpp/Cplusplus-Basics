#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21};
    int target=18;
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=(lo+(hi-lo)/2);
        if(arr[mid]==target) {
        cout<<arr[mid]; 
        break;}
        else if (arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    return 0;

}