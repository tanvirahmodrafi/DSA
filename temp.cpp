#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int arr1[5] = {2,3,4,6,9},
		arr2[4] = {1,3,5,8};
	
	int n;

	int sizeOfArr1 = sizeof(arr1)/sizeof(arr1[0]);
	int sizeOfArr2 = sizeof(arr2)/sizeof(arr2[0]);

	n = (sizeOfArr1 + sizeOfArr2);
	int mergedArr[n];
	int sizeOfMargeedArr = sizeof(mergedArr)/sizeof(mergedArr[0]);

	for (int i = 0; i < sizeOfArr1; i++)
	{
		mergedArr[i] = arr1[i];
	}
	for (int i = n-sizeOfArr2,j = 0; i < n; i++,j++)
	{
		mergedArr[i] = arr2[j];
	}

    sort(mergedArr, mergedArr + sizeOfMargeedArr);

	for (int i = 0; i < sizeOfMargeedArr; i++){
		cout << mergedArr[i] << " ";
	}
	


	return 0;
}