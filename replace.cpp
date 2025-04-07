#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char &c : str)
        if (c == ' ') c = '_';

    cout << "Modified string: " << str << endl;
    return 0;
}
