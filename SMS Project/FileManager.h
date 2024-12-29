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
