#include<iostream>
#include<string>

using namespace std;

class LoginSystem {
    private:
        string username;
        string password;

    public:
        LoginSystem() {
            username = "Harshit";
            password = "shakya2003";
        }

        void login() {
            string inputUsername, inputPassword;
            cout << "\033[1;35m**Welcome to the LOGIN PAGE**\033[0m" << endl;     
            cout << "Enter username : ";
            cin >> inputUsername;

            cout << "Enter password: ";
            cin >> inputPassword;


            if(inputUsername == username && inputPassword == password) {
                cout << "Login successful!" << endl;
                
            }
            else if(username == password) 
            {
                cout<<"Hey Welcome to this harshit world"<<endl;

            }
             else {
                cout << "Invalid username or password!" << endl;
            }
        }
};

int main() {
    LoginSystem ls;
    ls.login();

    return 0;
}
