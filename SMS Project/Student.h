#pragma once
#include "User.h";
#include<sstream>
#include <string>


class Student: public User
{
public:
   
    Student(const std::string& username, const std::string& password, const std::string& role)
    {
        // The User constructor is called first
        // LoggedIn is initialized to false by default
    }

    //Check If Student Exisits In the file
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


};

