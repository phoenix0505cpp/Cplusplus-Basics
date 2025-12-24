#include <iostream>
using namespace std;
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
    int arr[]={50,4,6,34,4,5,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Size:"<<size<<endl;
    display(arr,size);
    int *ptr=arr;
    cout<<"Address of array:"<<ptr<<endl;//address print
    cout<<"First element method 1 print:"<<*ptr<<endl;// first element of array print.
    cout<<"First element method 2 print:"<<arr[0]<<endl;//first element of array print.
    // ptr[0]=8;// or *ptr=8
    *ptr=8;//Changing of element through pointer.
    cout<<*ptr<<endl;
    display(arr,size);
    ptr[10]=100;//we are inserting 100 at new array.
    cout<<ptr[10];
    cout<<endl;
    display(arr,size);
}