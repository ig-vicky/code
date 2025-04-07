#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;
    for (char c : str)
        if (c != ' ')
            freq[c]++;

    char maxChar = ' ';
    int maxCount = 0;
    for (auto &p : freq) {
        if (p.second > maxCount) {
            maxChar = p.first;
            maxCount = p.second;
        }
    }

    cout << "Most frequent character: " << maxChar << " (count: " << maxCount << ")" << endl;
    return 0;
}
