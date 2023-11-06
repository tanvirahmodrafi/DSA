#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n, r;
    cin >> n >> r;
    long long i,ans=1;
    for (i = 1;i <= r;i++)
    {
        ans = (ans*n) / i;
        n--;
    }
    cout << ans;
}