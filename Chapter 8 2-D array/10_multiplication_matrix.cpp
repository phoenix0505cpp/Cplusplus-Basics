#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter number of rows of 1 matrix:";
    cin>>m;
    cout<<"Enter number of columns of 1 matrix:";
    cin>>n;
    int p,q;
    cout<<"Enter number of rows of 1 matrix:";
    cin>>p;
    cout<<"Enter number of columns of 1 matrix:";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"Enter matrix 1 elements:";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"Enter matrix 2 elements:";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //resultant matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                // multiply
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][0]*b[0][j];
                }
            }
        }
        //print
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<"The matrices cannot be multiplied.";
   
}