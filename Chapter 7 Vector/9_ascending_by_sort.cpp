#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(8);
    v.push_back(4);
    v.push_back(9);
    v.push_back(83);
    v.push_back(1);
    v.push_back(70);
    // int size=v.size()
    cout << "Output:";
    for (int i=0; i < v.size(); i++)
    {
        cout << v.at(i);
    }
    cout <<endl;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i);
    }
    cout << endl;
}