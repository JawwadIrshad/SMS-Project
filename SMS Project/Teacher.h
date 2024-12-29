#pragma once
#include "User.h"
#include "AuthUser.h"
#include <string>

class Teacher:AuthUser
{
public:

    Teacher(const std::string& username, const std::string& password, const std::string& role)
        : AuthUser(username, password, role) {
        // The User constructor is called first
        // LoggedIn is initialized to false by default
    }

};

