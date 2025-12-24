#include <iostream>
using namespace std;
void display(int arr[],int size){
   
    for(int i=0;i<=size-1;i++)
{
    cout<<arr[i]<<" ";
}


}
int main(){
    int arr[]={1,3,4,5,67,534,7554};
    int size=sizeof(arr)/sizeof(arr[0]);   
    cout<<"Size: "<<size<<endl;;
    cout<<"Array: ";
    display(arr,size);

}