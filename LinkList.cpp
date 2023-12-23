#include <iostream>
#include <climits>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void prime(int arr[], int n) {
    
    int oddCounter = 0, odd[100];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd[oddCounter++] = arr[i];
        }
    }

    cout << "Prime Numbers: ";
    for (int i = 0; i < oddCounter; ++i) {
        if (isPrime(odd[i])) {
            cout << odd[i] << " ";
        }
    }
    cout << endl;

    cout << "Composite Numbers: ";
    for (int i = 0; i < oddCounter; ++i) {
        if (!isPrime(odd[i])) {
            cout << odd[i] << " ";
        }
    }
    cout << endl;
}

void OddEven(int arr[], int n)
{
    int evenCounter = 0, oddCounter = 0;
    int even[100], odd[100];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCounter++] = arr[i];
        }
        else
        {
            odd[oddCounter++] = arr[i];
        }
    }

    cout << "Even Numbers: ";
    for (int i = 0; i < evenCounter; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd Numbers: ";
    for (int i = 0; i < oddCounter; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
}

void sum(int arr[], int n)
{
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenSum += arr[i];
        }
        else
        {
            oddSum += arr[i];
        }
    }

    cout << "Even sum: " << evenSum
         << " Odd sum: " << oddSum
         << " Difference: " << evenSum - oddSum << endl;
}

void BigMin(int arr[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Smallest number: " << min
         << " Biggest number: " << max
         << " Difference: " << max - min << endl;
}
void search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            if (k % 2 == 0)
            {
                cout << k << " is found in Even array";
            }
            else
            {
                cout << k << " is found in Odd array";
            }
            return;
        }
    }
    cout << k << " is not found in any array";
}
void sort(int arr[], int n)
{
    int evenCounter = 0, oddCounter = 0;
    int even[100], odd[100];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[evenCounter++] = arr[i];
        }
        else
        {
            odd[oddCounter++] = arr[i];
        }
    }
    for (int i = 0; i < evenCounter - 1; i++)
    {
        for (int j = 0; j < evenCounter - i - 1; j++)
        {
            if (even[j] > even[j + 1])
            {
                int temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < oddCounter - 1; i++)
    {
        for (int j = 0; j < oddCounter - i - 1; j++)
        {
            if (odd[j] < odd[j + 1])
            {
                int temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    cout << "Even Numbers: ";
    for (int i = 0; i < evenCounter; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd Numbers: ";
    for (int i = 0; i < oddCounter; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], n, k;
    cout << "Size of the array\n";
    cin >> n;
    cout<< "Enter the elements\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int inp;
    while(1){
        cout<<"Press 1 to see the odd and even numbers\n";
        cout<<"Press 2 to see the sum of odd and even numbers and difference \n";
        cout<<"Press 3 to see the smallest and largest numbers and there difference\n";
        cout<<"Press 4 to search a number\n";
        cout<<"Press 5 to see the prime and composite numbers in odd array\n";
        cout<<"Press 6 to see the sorted array\n";
        cout<<"Press 7 to exit \n";
        cin >> inp;
        if (inp == 1)
        {
            OddEven(arr,n);
        }
        else if (inp == 2){
            sum(arr, n);
        }
        else if(inp == 3){
            BigMin(arr, n);
        }
        else if(inp == 4){
            cout << "Enter the number you want to search \n";
            cin >> k;
            search(arr, n, k);
        }
        else if(inp == 5){
            prime(arr, n);
        }
        else if(inp == 6){
            sort(arr, n);
        }else{
            break;
        }
    }

    return 0;
}
