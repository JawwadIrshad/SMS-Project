#pragma once
#include "User.h"

class AuthUser : public User {
public:
    bool IsLoggedIn = false;
    
    // Constructors
    AuthUser() = default;
    AuthUser(std::string username, std::string password, std::string role = "Student")
        : User(username, password, role), IsLoggedIn(false) {
    }

    // Login method
    bool login() {
        if (userExists(username, password, role)) {
            IsLoggedIn = true;
            return true;
        }
        return false;
    }

    // Signup method
    bool signup() {
        if (!userExists(username, password, role)) {
            saveToFile(); // Save username, password, and role to the file
            return true;
        }
        return false;
    }

    // Overloaded assignment operator
    AuthUser& operator=(const AuthUser& a) {
        if (this != &a) { // Prevent self-assignment
            username = a.username;
            password = a.password;
            role = a.role;
            IsLoggedIn = a.IsLoggedIn;
        }
        return *this;
    }

    // Accessor for IsLoggedIn
    bool getIsLoggedIn() const { return IsLoggedIn; }
    void setIsLoggedIn(bool status) { IsLoggedIn = status; }

    // Destructor
    virtual ~AuthUser() {}
};
