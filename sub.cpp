#include <iostream>
#include <string>
using namespace std;

void printSubstrings(string str) {
    int len = str.length();
    for (int i = 0; i < len; i++)
        for (int j = 1; j <= len - i; j++)
            cout << str.substr(i, j) << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "All substrings:\n";
    printSubstrings(str);
    return 0;
}
