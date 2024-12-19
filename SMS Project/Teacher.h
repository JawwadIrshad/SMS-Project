#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <msclr/marshal_cppstd.h>  // Remove if not needed

using namespace System;
using namespace System::Windows::Forms;

class Teacher {
private:
    std::string subjectName;  // Teacher's subject name
    std::string username;     // Teacher's username

//public:
//    Teacher(const std::string& username) : username(username) {
//        // Get subject from users.csv for the teacher
//        GetSubjectFromCSV(username);
//    }
//
//    // Function to get subject from users.csv
//    void GetSubjectFromCSV(const std::string& teacherUsername) {
//        std::ifstream file("users.csv");
//        if (!file.is_open()) {
//            MessageBox::Show("Unable to open users.csv.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//            return;
//        }
//
//        std::string line;
//        while (std::getline(file, line)) {
//            std::stringstream ss(line);
//            std::string username, password, role, subject;
//
//            // Read username, password, role, and subject from the CSV
//            std::getline(ss, username, ',');
//            std::getline(ss, password, ',');
//            std::getline(ss, role, ',');
//            std::getline(ss, subject, ',');
//
//            // If the username matches and the role is "Teacher", set the subject
//            if (username == teacherUsername && role == "Teacher") {
//                subjectName = subject;
//                break;
//            }
//        }
//
//        file.close();
//
//        // If subject is not found
//        if (subjectName.empty()) {
//            MessageBox::Show("Subject not found for teacher.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//        }
//    }
//
//    // Function to load marks into DataGridView
//    void LoadMarksToDataGridView(DataGridView^ dataGridView) {
//        dataGridView->Rows->Clear();
//
//        // Get the subject file name
//        std::string subjectFile = subjectName + "_marks.csv";
//
//        std::ifstream file(subjectFile);
//        if (!file.is_open()) {
//            MessageBox::Show("Unable to open the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//            return;
//        }
//
//        std::string line;
//        while (std::getline(file, line)) {
//            std::stringstream ss(line);
//            std::string username, mark;
//
//            std::vector<String^> rowData;
//
//            // Read each row data
//            std::getline(ss, username, ',');
//            rowData.push_back(gcnew String(username.c_str()));
//
//            while (std::getline(ss, mark, ',')) {
//                rowData.push_back(gcnew String(mark.c_str()));
//            }
//
//            // Convert std::vector<String^> to array<String^>^
//            array<String^>^ rowArray = gcnew array<String^>(rowData.size());
//            for (int i = 0; i < rowData.size(); i++) {
//                rowArray[i] = rowData[i];
//            }
//
//            // Add row to DataGridView
//            dataGridView->Rows->Add(rowArray);
//        }
//        file.close();
//    }
//
//    // Function to save marks from DataGridView to CSV
//    void SaveMarksFromDataGridView(DataGridView^ dataGridView) {
//        // Get the subject file name
//        std::string subjectFile = subjectName + "_marks.csv";
//
//        std::ofstream file(subjectFile);
//        if (!file.is_open()) {
//            MessageBox::Show("Unable to open the file for writing.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//            return;
//        }
//
//        for (int row = 0; row < dataGridView->Rows->Count; ++row) {
//            if (dataGridView->Rows[row]->IsNewRow)
//                continue;
//
//            for (int col = 0; col < dataGridView->Columns->Count; ++col) {
//                Object^ cellValue = dataGridView->Rows[row]->Cells[col]->Value;
//                if (cellValue != nullptr) {
//                    std::string cellString = msclr::interop::marshal_as<std::string>(cellValue->ToString());
//                    file << cellString;
//                }
//
//                if (col < dataGridView->Columns->Count - 1) {
//                    file << ",";
//                }
//            }
//            file << "\n";
//        }
//        file.close();
//        MessageBox::Show("Marks saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
//    }
};
