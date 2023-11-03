#include <bits/stdc++.h>

using namespace std;

long long arr[101];
double recursionSpace(long long inp[],long long n){
	return (inp[n-1])/n;
}


int main(void)
{
	long long n,m,temp;
	cin >> n;
	long long c = n-m;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		if(i == 0){
			arr[i] = temp;
		}else{
			arr[i] = temp + arr[i-1];
		}
	}

	cout<< fixed<<setprecision(6)<<recursionSpace(arr,n);
	
}