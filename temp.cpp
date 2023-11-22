#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    long long a ;
    long long b ;
    long long q,ans;
    cin>>a>>b>>q;
    int res = q % 3; 

    if(res == 1){
        ans = a;
    }else if (res == 2){
        ans = b;
    }else {
        ans = a ^ b;
    }

    cout << ans;
    
}