#include <iostream>
using namespace std;

void printSubsets(string str, string curr = "", int index = 0) {
    if (index == str.length()) {
        cout << "\"" << curr << "\"" << endl;
        return;
    }
    printSubsets(str, curr, index + 1);               // Exclude current character
    printSubsets(str, curr + str[index], index + 1);  // Include current character
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "All subsets:\n";
    printSubsets(str);
    return 0;
}
