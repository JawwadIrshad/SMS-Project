#pragma once
#include "User.h"
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class AuthUser : public User {
public:
    bool IsLoggedIn;


    //Defualt constructor
    AuthUser(){}

    // Constructor
    AuthUser(const std::string& username, const std::string& password, const std::string& role)
        : User(username, password, role), IsLoggedIn(false) {
        // Initialize IsLoggedIn to false by default
    }

    static bool userExists(const std::string& username, const std::string& password, const std::string& role) {
        std::ifstream inFile("users.csv");
        if (!inFile.is_open()) {
            std::cerr << "Error: Could not open users.csv" << std::endl;
            return false;
        }

        std::string line;
        while (std::getline(inFile, line)) {
            std::stringstream ss(line);
            std::string savedName, savedPassword, savedRole, savedSubject;

            // Read four fields (if available)
            std::getline(ss, savedName, ',');
            std::getline(ss, savedPassword, ',');
            std::getline(ss, savedRole, ',');
            std::getline(ss, savedSubject, ','); // Handle the extra field

            // Match the first three fields (ignore subject for userExists logic)
            if (savedName == username && savedPassword == password && savedRole == role) {
                return true;
            }
        }

        return false; // User not found
    }

    // Accessor for IsLoggedIn
    bool getIsLoggedIn() const { return IsLoggedIn; }
    void setIsLoggedIn(bool status) { IsLoggedIn = status; }

    // Destructor
    virtual ~AuthUser() {}
};
