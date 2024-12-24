#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>



// FileManager class to handle file operations
class FileManager {
public:
    static void saveUserToFile(const std::string& username, const std::string& password, const std::string& role) {
        std::ofstream file("users.csv", std::ios::app);
        if (file.is_open()) {
            file << username << "," << password << "," << role << "\n";
            file.close();
        }
    }

    static bool userExistsInFile(const std::string& username, const std::string& password, const std::string& role) {
        std::ifstream file("users.csv");
        std::string line, fileUsername, filePassword, fileRole;
        if (file.is_open()) {
            while (std::getline(file, line)) {
                size_t firstComma = line.find(',');
                size_t secondComma = line.find(',', firstComma + 1);

                fileUsername = line.substr(0, firstComma);
                filePassword = line.substr(firstComma + 1, secondComma - firstComma - 1);
                fileRole = line.substr(secondComma + 1);

                if (fileUsername == username && filePassword == password && fileRole == role) {
                    return true;
                }
            }
            file.close();
        }
        return false;
    }

    static bool isRoleValid(const std::string& username, const std::string& role) {
        std::ifstream file("users.csv");
        std::string line, fileUsername, fileRole;
        if (file.is_open()) {
            while (std::getline(file, line)) {
                size_t firstComma = line.find(',');
                size_t secondComma = line.find(',', firstComma + 1);

                fileUsername = line.substr(0, firstComma);
                fileRole = line.substr(secondComma + 1);

                if (fileUsername == username && fileRole == role) {
                    return true;
                }
            }
            file.close();
        }
        return false;
    }
};


// User class with encapsulated data and methods
class User {
protected:
    std::string username;
    std::string password;
    std::string roll = "1";
    std::string role;
    std::vector<std::string> courses = { "Discrete Structures", "OOP", "Calculus", "Oral Communication", "Applied Physics" };
    std::vector<std::string> marksOfCourses;

public:
    // Default constructor
    User() {}

    // Parameterized constructor to initialize username, password, and role
    User(std::string username, std::string password, std::string role = "Student")
        : username(username), password(password), role(role) {
    }

    // Getter and Setter for username
    std::string getUsername() const { return username; }
    void setUsername(const std::string& newUsername) { username = newUsername; }

    // Getter and Setter for password
    std::string getPassword() const { return password; }
    void setPassword(const std::string& newPassword) { password = newPassword; }

    // Getter and Setter for role
    std::string getRole() const { return role; }
    void setRole(const std::string& newRole) { role = newRole; }

    ////Get roll number
    std::string getRoll() {
        return roll;
    }
    // Getter and Setter for marks
    std::vector<std::string> getMarksOfCourses() const { return marksOfCourses; }
    void setMarksOfCourses(const std::vector<std::string>& marks) { marksOfCourses = marks; }

    // Save user data (including marks) to file
    void saveToFile() {
        FileManager::saveUserToFile(username, password, role);

        // Save marks to a separate file for each student
        std::ofstream marksFile("marks.csv", std::ios::app);
        if (marksFile.is_open()) {
            marksFile << username;  // Start by saving the student's username
            for (const auto& mark : marksOfCourses) {
                marksFile << "," << 0;  // Add each mark for the courses
            }
            marksFile << "\n";
            marksFile.close();
        }
    }

    // Load marks from file
    void loadMarksFromFile() {
        std::ifstream marksFile("marks.csv");
        std::string line, fileUsername, mark;
        if (marksFile.is_open()) {
            while (std::getline(marksFile, line)) {
                size_t firstComma = line.find(',');
                fileUsername = line.substr(0, firstComma);

                if (fileUsername == username) {
                    marksOfCourses.clear();  // Clear existing marks before adding new ones
                    size_t startPos = firstComma + 1;
                    while ((firstComma = line.find(',', startPos)) != std::string::npos) {
                        mark = line.substr(startPos, firstComma - startPos);
                        marksOfCourses.push_back(mark);
                        startPos = firstComma + 1;
                    }
                    marksOfCourses.push_back(line.substr(startPos));  // Last mark (after the last comma)
                    break;
                }
            }
            marksFile.close();
        }
    }

    // Validate user existence with role
    static bool userExists(const std::string& username, const std::string& password, const std::string& role) {
        return FileManager::userExistsInFile(username, password, role);
    }

    // Validate if a role is valid for a username
    static bool isRoleValid(const std::string& username, const std::string& role) {
        return FileManager::isRoleValid(username, role);
    }
};
