#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> x;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) cout << "Element not found." << endl;
    return 0;
}
