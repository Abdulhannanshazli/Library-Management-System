#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string isbn;
    std::string title;
    std::string author;
    bool isAvailable;
    std::string currentBorrower;

public:
    Book();
    Book(const std::string& isbn, const std::string& title, const std::string& author);
    
    // Getters
    std::string getISBN() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    bool getAvailability() const;
    std::string getCurrentBorrower() const;
    
    // Setters
    void setISBN(const std::string& isbn);
    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setAvailability(bool status);
    void setBorrower(const std::string& borrower);
    
    // Display
    void displayDetails() const;
};

#endif 