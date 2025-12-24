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
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Printing of matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // transform in same matrix;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // swapping i,j and j,i
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[i][j] = temp;
        }
    }
    // print transposed matrix;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}