#include <iostream>
using namespace std;
void display(int arr[])
{
    for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return;
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[]={1,4,5,6,55,44,66,44,33,0};
    display(arr);
    change(arr);
    display(arr);
}
