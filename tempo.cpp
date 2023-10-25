#include <iostream>
#include <cmath>

using namespace std;

int testCase, pointer;
string num;

int printNum(string num)
{
    if (pointer == num.size())
        return 0;

    cout << num[pointer] << " ";
    pointer++;
    return printNum(num);
}

int prnt(int n)
{
    cin >> num;
    pointer = 0;
    printNum(num);
    cout << '\n';
    --n;
    if (n)
    {
        prnt(n);
    }
    else
    {
        return 0;
    }
}

int main(void)
{

    cin >> testCase;
    prnt(testCase);
}