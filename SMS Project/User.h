#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// FileManager class to handle file operations
class FileManager {
public:
    static void saveUserToFile(const std::string& username, const std::string& password) {
        std::ofstream file("users.csv", std::ios::app);
        if (file.is_open()) {
            file << username << "," << password << "\n";
            file.close();
        }
    }

    static bool userExistsInFile(const std::string& username, const std::string& password) {
        std::ifstream file("users.csv");
        std::string line, fileUsername, filePassword;
        if (file.is_open()) {
            while (std::getline(file, line)) {
                size_t commaPos = line.find(',');
                fileUsername = line.substr(0, commaPos);
                filePassword = line.substr(commaPos + 1);
                if (fileUsername == username && filePassword == password) {
                    return true;
                }
            }
            file.close();
        }
        return false;
    }
};

// User class with encapsulated data and methods
public class User {
protected:
    std::string username;
    std::string password;
    std::string role;
    std::string gpa;
    std::vector<std::string> courses = {"Discrete Structures", "OOP", "Calculus", "Oral Communication", "Applied Physics"};
    std::vector<std::string> marksOfCourses;
public:
    bool IsStudent;
    // Default constructor
    User() {}

    // Parameterized constructor to initialize username and password
    User(std::string username, std::string password) : username(username), password(password) {}

    // Getter for username
    std::string getUsername() const { return username; }

    // Setter for username
    void setUsername(const std::string& newUsername) { username = newUsername; }

    // Getter for password
    std::string getPassword() const { return password; }

    // Setter for password
    void setPassword(const std::string& newPassword) { password = newPassword; }
    //get role
    std::string getRole() {
        return role;
    }
    //setter for role
    void setRole(std::string role) {
        this->role = role;
    }
    //Get marks of courses
     std::vector<std::string> getMarksOfCourses() const {
        return marksOfCourses;
    }
    //Set marks of courses
    void setMarksOfCourses(const std::vector<std::string>& marksOfCourses) {
        this->marksOfCourses = marksOfCourses;
    }
    // Method to save user data to file
    void saveToFile() {
        FileManager::saveUserToFile(username, password);
    }

    // Static method to check if user exists in file
    static bool userExists(const std::string& username, const std::string& password) {
        return FileManager::userExistsInFile(username, password);
    }
};