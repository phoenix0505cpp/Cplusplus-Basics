#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix:";
    cin>>m;
    int n;
    cout<<"Enter columns of matrix:";
    cin>>n;
    cout<<"Enter matrix elements:";
    int arr[m][n];
    for(int i=0;i<m;i++){ 
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //print matrix
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //wave print
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int k=n-1;k>=0;k--){
                cout<<arr[i][k]<<" ";
            }
        }
    }
}