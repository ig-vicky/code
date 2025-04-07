#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;
    cout << "Enter number of units consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 2;
    else if (units <= 300)
        bill = (100 * 2) + (units - 100) * 5;
    else
        bill = (100 * 2) + (200 * 5) + (units - 300) * 8;

    cout << "Electricity bill: ₹" << bill << endl;

    return 0;
}
