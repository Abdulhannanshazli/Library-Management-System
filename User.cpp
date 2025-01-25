#include "User.h"
#include <iostream>
#include <algorithm>

using namespace std;

User::User() : role(UserRole::MEMBER) {}

User::User(const string& id, const string& name, const string& password, UserRole role)
    : userId(id), name(name), password(password), role(role) {}

string User::getUserId() const { return userId; }
string User::getName() const { return name; }
UserRole User::getRole() const { return role; }
vector<string> User::getBorrowedBooks() const { return borrowedBooks; }

bool User::verifyPassword(const string& inputPassword) const {
    return password == inputPassword;
}

void User::addBorrowedBook(const string& isbn) {
    borrowedBooks.push_back(isbn);
}

void User::removeBorrowedBook(const string& isbn) {
    auto it = find(borrowedBooks.begin(), borrowedBooks.end(), isbn);
    if (it != borrowedBooks.end()) {
        borrowedBooks.erase(it);
    }
}

void User::displayDetails() const {
    cout << "User ID: " << userId << endl;
    cout << "Name: " << name << endl;
    cout << "Role: " << (role == UserRole::ADMIN ? "Admin" : "Member") << endl;
    cout << "Borrowed Books: " << borrowedBooks.size() << endl;
    for (const auto& isbn : borrowedBooks) {
        cout << "- " << isbn << endl;
    }
}

// Implement other User methods... 