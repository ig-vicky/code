#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter K (positions to rotate): ";
    cin >> k;
    k = k % n;

    cout << "Rotated array:\n";
    for (int i = n - k; i < n; i++) cout << arr[i] << " ";
    for (int i = 0; i < n - k; i++) cout << arr[i] << " ";
    return 0;
}
