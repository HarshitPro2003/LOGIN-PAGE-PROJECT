#include <iostream>
#include <string>
using namespace std;

int Title()
{
    cout << ":*:*: LOGIN PAGE :*:*:" << endl;
    return 0;
}

int intro()
{
    
    string name;
    cout << "Enter your name: ";
    cin >> name;

    string pass;
    cout << "Enter password: ";
    cin >> pass;

    // If and Else condition
    if (name == "Harshit" // Replace "desired_username" with the actual username
    {
        cout << "LOGIN SUCCESSFUL" << endl;
    }
    else
    {
        cout << "SOMETHING WENT WRONG" << endl;
    }
    return 0;
}

int main()
{
    Title();
    intro();
}
