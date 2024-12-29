//#pragma once
//#include "FileManager.h"
//#include <fstream>
//#include <string>
//
//class ConcreteFileManager : public FileManager {
//public:
//    // Implementing the saveUserToFile method
//    void saveUserToFile(const std::string& username, const std::string& password, const std::string& role) override {
//        std::ofstream file("users.csv", std::ios::app);
//        if (file.is_open()) {
//            file << username << "," << password << "," << role << "\n";
//            file.close();
//        }
//    }
//
//    // Implementing the userExistsInFile method
//    bool userExistsInFile(const std::string& username, const std::string& password, const std::string& role) override {
//        std::ifstream file("users.csv");
//        std::string line, fileUsername, filePassword, fileRole;
//        if (file.is_open()) {
//            while (std::getline(file, line)) {
//                size_t firstComma = line.find(',');
//                size_t secondComma = line.find(',', firstComma + 1);
//
//                fileUsername = line.substr(0, firstComma);
//                filePassword = line.substr(firstComma + 1, secondComma - firstComma - 1);
//                fileRole = line.substr(secondComma + 1);
//
//                if (fileUsername == username && filePassword == password && fileRole == role) {
//                    return true;
//                }
//            }
//            file.close();
//        }
//        return false;
//    }
//
//    // Implementing the isRoleValid method
//    bool isRoleValid(const std::string& username, const std::string& role) override {
//        std::ifstream file("users.csv");
//        std::string line, fileUsername, fileRole;
//        if (file.is_open()) {
//            while (std::getline(file, line)) {
//                size_t firstComma = line.find(',');
//                size_t secondComma = line.find(',', firstComma + 1);
//
//                fileUsername = line.substr(0, firstComma);
//                fileRole = line.substr(secondComma + 1);
//
//                if (fileUsername == username && fileRole == role) {
//                    return true;
//                }
//            }
//            file.close();
//        }
//        return false;
//    }
//};
