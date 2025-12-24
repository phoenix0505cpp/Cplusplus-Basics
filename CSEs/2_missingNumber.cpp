#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long total=1LL*n*(n+1)/2;
    //1LL is the literal long long integer value 1.
    //In C++, integer literals like 1 are treated as int by default.If n is large (e.g. n = 100000), then:
    long long sum=0;
    for(int i=0;i<n-1;i++){
        long long x;
        cin>>x;
        sum+=x;
    }
    cout<<total-sum;
    return 0;
}