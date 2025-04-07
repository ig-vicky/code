#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int matrix[n][n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    bool symmetric = true;
    for (int i = 0; i < n && symmetric; i++)
        for (int j = 0; j < n; j++)
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }

    if (symmetric)
        cout << "Matrix is symmetric." << endl;
    else
        cout << "Matrix is not symmetric." << endl;

    return 0;
}
