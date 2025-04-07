#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;

public:
    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll_no;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    cin.ignore(); // clear input buffer for getline
    s.input();
    s.display();
    return 0;
}
