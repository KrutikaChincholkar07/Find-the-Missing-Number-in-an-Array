#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n (range 1 to n): ";
    cin >> n;

    int arr[n - 1];
    int actualSum = 0;

    cout << "Enter " << n - 1 << " numbers:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        actualSum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;
    int missing = expectedSum - actualSum;

    cout << "Missing number: " << missing;

    return 0;
}
