#include <iostream>
#include <cmath>

using namespace std;


long long factorial_of_r(long long r)
{
    long long fact=1;
    for (long long i = 1;i <= r;i++)
    {
        fact *= i;
    }
    return fact;
}

long long combination(long long n, long long r)
{
    long long store = 1;
    for (long long i = (n-r)+1;i <= n ;i++)
    {
        store *= i;
    }
    long long Ro = factorial_of_r(r);
    long long ans = store / Ro;
    return ans;
}

long long func(long long n, long long r)
{
    if (r == 0 || (n - r) == 0)
    {
        return 1;
    }

    else
    {
        return combination(n, r);
    }
}


int main()
{
    long long n, r;
    cin >> n >> r;
    long long ans = func( n, r);
    cout << ans << '\n';
}