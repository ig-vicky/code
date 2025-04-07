#include <iostream>
#include <string>
using namespace std;

string reverseString(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--)
        rev += str[i];
    return rev;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed: " << reverseString(str) << endl;
    return 0;
}
