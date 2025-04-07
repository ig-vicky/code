#include <iostream>
#include <string>
using namespace std;

string removeDuplicates(string str) {
    int len = str.length();
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; ) {
            if (str[i] == str[j]) {
                str.erase(j, 1);
                len--;
            } else j++;
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Without duplicates: " << removeDuplicates(str) << endl;
    return 0;
}
