#include <bits/stdc++.h>

using namespace std;
long long result;

long long recursion(long long a, long long b, long long q)
{
    if (q == 1)
    {
        return a;
    }
    else if (q == 2)
    {
        return b;
    }
    else
    {
        result = recursion(a, b, q - 1) ^ recursion(a, b, q - 2);
        return result;
    }
}

int main()
{
    long long a, b, q;

    cin >> a >> b >> q;
    long long result2 = recursion(a, b, q);

    cout << result2 << endl;
}
