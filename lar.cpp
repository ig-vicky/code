#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c)
            cout << "Largest is: " << a << endl;
        else
            cout << "Largest is: " << c << endl;
    } else {
        if (b > c)
            cout << "Largest is: " << b << endl;
        else
            cout << "Largest is: " << c << endl;
    }

    return 0;
}
