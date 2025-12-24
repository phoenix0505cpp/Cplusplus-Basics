#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows and columns of matrix:";
    cin>>m>>n;
    int arr[m][n];
    cout<<"Enter matrix elements:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // matrix print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //wave print 
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}