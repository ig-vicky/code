#include <iostream>
using namespace std;

int main() {
    int rows, cols, largest;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;
    int arr[rows][cols];

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];

    largest = arr[0][0];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            if (arr[i][j] > largest)
                largest = arr[i][j];

    cout << "Largest element = " << largest << endl;
    return 0;
}
