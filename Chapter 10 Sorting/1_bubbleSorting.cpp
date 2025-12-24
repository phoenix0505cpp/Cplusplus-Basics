#include <iostream>
using namespace std;
int main(){
    int arr[]={5,-40,3,54,1,21,10,22};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    for(int i=0;i<n-1;i++){// n-1 passes
        //traverse
        {for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){//swapping
               swap(arr[j],arr[j+1]); 
                }
            }
        }
    }
    cout<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";}
}