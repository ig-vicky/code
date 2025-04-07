#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, sub;
    cout << "Enter main string: ";
    getline(cin, str);
    cout << "Enter substring to find: ";
    getline(cin, sub);

    size_t pos = str.find(sub);
    if (pos != string::npos)
        cout << "Found at position: " << pos << endl;
    else
        cout << "Not found!" << endl;

    return 0;
}
