#include <iostream>
using namespace std;
void display(int arr[],int size)
{
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}
void change(int b[],int size){
    b[0]=100;
}
int main(){
    int arr[]={1,4,5,6,55,44,66,44,33,0};
    int size=sizeof(arr)/sizeof(arr[0]);// size will given in questions.
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}
