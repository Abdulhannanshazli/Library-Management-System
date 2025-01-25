#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

Book::Book() : isAvailable(true) {}

Book::Book(const string& isbn, const string& title, const string& author)
    : isbn(isbn), title(title), author(author), isAvailable(true) {}

string Book::getISBN() const { return isbn; }
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
bool Book::getAvailability() const { return isAvailable; }
string Book::getCurrentBorrower() const { return currentBorrower; }

void Book::setISBN(const string& isbn) { this->isbn = isbn; }
void Book::setTitle(const string& title) { this->title = title; }
void Book::setAuthor(const string& author) { this->author = author; }
void Book::setAvailability(bool status) { isAvailable = status; }
void Book::setBorrower(const string& borrower) { currentBorrower = borrower; }

void Book::displayDetails() const {
    cout << "ISBN: " << isbn << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Status: " << (isAvailable ? "Available" : "Borrowed") << endl;
    if (!isAvailable) {
        cout << "Borrowed by: " << currentBorrower << endl;
    }
}

// Implement other Book methods... 