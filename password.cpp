#include<iostream>
using namespace std;
int main ()
{
    string userName;
    string userPassword;
    int loginAttempt = 0;
    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;
        if (userName == "vignesh" && userPassword == "bala")
        {
            cout << "Welcome vignesh!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }
    cout << "Thank you for logging in.\n";
}
