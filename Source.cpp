#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Person.h"
#include "Guest.h"
#include "VIP.h"
#include "Staff.h"
using namespace std;

vector<Person*> loadUsers(const string& filename) {
    ifstream file(filename);
    vector<Person*> users;
    string line, phoneNumber, name, password;
    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, phoneNumber, '|');
        getline(ss, name, '|');
        getline(ss, password, '|');
        // Example: All users are loaded as Guests for simplicity
        users.push_back(new Guest(phoneNumber, name, password));
    }
    file.close();
    return users;
}

void saveUsers(const vector<Person*>& users, const string& filename) {
    ofstream file(filename);
    for (auto user : users) {
        Guest* guest = dynamic_cast<Guest*>(user);
        if (guest) {
            file << guest->getPhoneNumber() << "|" << guest->getName() << "|" << guest->getPassword() << "\n";
        }
    }
    file.close();
}

int main() {
    string filename = "users.txt";
    vector<Person*> users = loadUsers(filename);
    string inputPhoneNumber, inputPassword;

    cout << "Enter phone number: ";
    cin >> inputPhoneNumber;
    cout << "Enter password: ";
    cin >> inputPassword;

    bool found = false;
    for (auto user : users) {
        if (user->getPhoneNumber() == inputPhoneNumber && user->checkPassword(inputPassword)) {
            cout << "Login successful!" << endl;
            // Perform further actions based on user type
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Login failed: User not found or wrong password." << endl;
    }

    // Don't forget to save any changes back to the file if needed
    saveUsers(users, filename);

    // Clean up dynamically allocated objects
    for (auto user : users) {
        delete user;
    }
    return 0;
}
