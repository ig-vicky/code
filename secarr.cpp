
#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the no of elements: ";
    cin >> n;

    // Handle invalid array size
    if (n <= 1) {
        cout << "Array should have at least 2 elements to find second largest." << endl;
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        cout << "All elements are the same, no second largest element." << endl;
    }
    else {
        cout << "Second largest element is: " << second << endl;
    }

    return 0;
}



