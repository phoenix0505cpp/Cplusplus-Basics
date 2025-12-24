#include <iostream>
using namespace std;
int main(){
    int arr[]={1,4,6,88,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int *ptr=arr;
    for(int i=0;i<size;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
    *ptr=8;
    ptr++;
    *ptr=9;
    ptr--;
    cout<<endl;
    for(int i=0;i<size-1;i++){
        cout<<*ptr<<" ";
        ptr++;

    }
    ptr=arr;
}