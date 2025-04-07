#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int count = 0;
    string word;
    stringstream ss(sentence);
    while (ss >> word) count++;

    cout << "Word count: " << count << endl;
    return 0;
}
