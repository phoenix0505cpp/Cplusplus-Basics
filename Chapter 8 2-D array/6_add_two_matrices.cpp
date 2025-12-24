#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter number of rows:";
    cin >> m;
    cout << "Enter number of columns:";
    cin >> n;
    // inserting matrix element
    cout << "Enter matrix elements:";
    int arr1[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    // Printing of matrix1

    cout << "Matrix1  :  " << endl;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    
    // inserting matrix element
    cout << "Enter matrix2 elements:";
    int arr2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
        // Printing of matrix2
        cout << "Matrix2  :  " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
    }
    // Addition of matrices
    int res[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           res[i][j]=arr1[i][j] +arr2[i][j];
        }
    }
    cout << "Resultant matrix:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }


}