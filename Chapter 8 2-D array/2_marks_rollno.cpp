#include<iostream>
using namespace std;
int main(){
    int n;
    // cout<<"Enter number of rows:";
    // cin>>m;
    cout<<"Enter number of columns:";// 
    cin>>n;
    // inserting matrix element
    cout<<"Enter matrix elements:";
    int arr[2][n];
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //Printing of matrix
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
