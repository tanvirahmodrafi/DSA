#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int marks[] = {1, 2, 3, 4, 5, 6, 6, 9, 32, 4};
    cout << marks[4] << '\n';

    vector<int> numbers;

    numbers.assign(10, 2);
    numbers.push_back(3);
    cout << numbers[9] << '\n';
    cout<< numbers[10] << '\n';

    int n = numbers.size();
    cout<< numbers[n-1] << '\n';//Last element

    numbers.insert(numbers.begin(),4);//O(n)
    cout << numbers[0] << '\n';//Inserting the first element
    
    
    
    
}