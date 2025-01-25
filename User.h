#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

enum class UserRole {
    ADMIN,
    MEMBER
};

class User {
private:
    std::string userId;
    std::string name;
    std::string password;
    UserRole role;
    std::vector<std::string> borrowedBooks;

public:
    User();
    User(const std::string& id, const std::string& name, const std::string& password, UserRole role);
    
    // Getters
    std::string getUserId() const;
    std::string getName() const;
    UserRole getRole() const;
    std::vector<std::string> getBorrowedBooks() const;
    
    // Operations
    bool verifyPassword(const std::string& inputPassword) const;
    void addBorrowedBook(const std::string& isbn);
    void removeBorrowedBook(const std::string& isbn);
    void displayDetails() const;
};

#endif 