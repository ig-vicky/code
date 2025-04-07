#include <iostream>
using namespace std;

int sumDivisors(int n, int i = 1) {
    if (i == n) return 0;
    if (n % i == 0)
        return i + sumDivisors(n, i + 1);
    return sumDivisors(n, i + 1);
}

bool isPerfect(int n) {
    return sumDivisors(n) == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPerfect(n))
        cout << "Perfect number\n";
    else
        cout << "Not a perfect number\n";
    return 0;
}
