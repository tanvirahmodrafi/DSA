#include <bits/stdc++.h>
using namespace std;

long long input[1000];

long long Fib(long long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long fibmn1 = Fib(n-1);
    long long fibmn2 = Fib(n-2);
    
    long long fib = fibmn1 + fibmn2;
    
    return fib;
}

int main(void) {
    long long n;
    cin >>n;

    cout << Fib(n-1);

    return 0;
}
