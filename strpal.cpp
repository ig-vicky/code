#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int i = 0, j = str.length() - 1;
    while (i < j) {
        if (str[i] != str[j]) return false;
        i++; j--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;
    return 0;
}
