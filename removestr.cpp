#include <iostream>
#include <string>
using namespace std;

string removeDigits(string str) {
    string result = "";
    for (char c : str)
        if (!isdigit(c))
            result += c;
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Without digits: " << removeDigits(str) << endl;
    return 0;
}
