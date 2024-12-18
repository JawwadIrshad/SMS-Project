#pragma once
#include "User.h"

class AuthUser : public User {
public:
    bool IsLoggedIn = false;
    AuthUser(){}
    AuthUser(std::string username, std::string password) : User(username, password) {}

    bool login() {
        return userExists(username, password);
        IsLoggedIn = true;
    }

    bool signup() {
        if (!userExists(username, password)) {
            saveToFile();
            return true;
        }
        return false;
    }
    //ovverloading = operator to store values of AuthUser user into currentUser to logout later on
    AuthUser& operator=(const AuthUser& a) {
        if (this != &a) { // Prevent self-assignment
            username = a.username;
            password = a.password;
            IsLoggedIn = a.IsLoggedIn;
        }
        return *this;
    }
};