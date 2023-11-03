#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int input[] = {0,1, 2, 3, 4, 0,5, 2, 6, 9, 32, 4};
    int n = sizeof(input) / sizeof(input[0]);
    unordered_set<int> seenValues;

    for (int i = 0; i < n; i++) {
        if (seenValues.count(input[i]) > 0) {
            cout << "First recursive value: " << input[i] << endl;
            break;
        } else {
            seenValues.insert(input[i]);
        }
    }

    return 0;
}
