#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string upper = str, lower = str;

    for (char &c : upper) c = toupper(c);
    for (char &c : lower) c = tolower(c);

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    return 0;
}
