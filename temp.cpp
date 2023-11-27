#include <iostream>
#include <cmath>

using namespace std;


int binarySearch(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] > k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {5,4,3,2,1};
    cout<< binarySearch(arr,5,5)<<endl;
}