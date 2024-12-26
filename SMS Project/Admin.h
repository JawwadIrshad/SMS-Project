#include<string>
#include<iostream>
#include <fstream>
#include <sstream>

using namespace System::Windows::Forms;
using namespace System;

#pragma once
ref class Admin
{
private:
    String^ adminUsername;  
    String^ adminPassword ;

public:
    Admin(String^ adminUsername, String^ adminPassword){
        this->adminUsername = adminUsername;
        this->adminPassword = adminPassword;
    }
    bool ValidateAdminLogin(TextBox^ adminName, TextBox^ password)
    {
        
        if (adminName->Text == adminUsername && password->Text == adminPassword)
        {
            return true;  // Login successful
        }
        return false;  // Invalid credentials
    }

    static void DisplayPannel(Panel^ panel, bool a) {
        panel->Visible = a;
    }
    static void DisplayTeachersOnGridView(DataGridView^ adminTeacherGridView) {
        // Path to the user.csv file
        std::ifstream file("users.csv");
        if (!file.is_open()) {
            MessageBox::Show("Could not open user.csv file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        // Clear the DataGridView before adding new data
        adminTeacherGridView->Rows->Clear();
        adminTeacherGridView->Columns->Clear();

        // Define the columns for the DataGridView
        adminTeacherGridView->Columns->Add("Name", "Name");
        adminTeacherGridView->Columns->Add("Password", "Password");
        adminTeacherGridView->Columns->Add("Subject", "Subject"); // Replacing "Role" with "Subject"

        std::string line;
        while (getline(file, line)) {
            std::stringstream ss(line);
            std::string name, password, role, subject;

            // Read the data from the row
            getline(ss, name, ',');
            getline(ss, password, ',');
            getline(ss, role, ',');
            getline(ss, subject, ',');

            // Check if the role is "Teacher"
            if (role == "Teacher") {
                // Add the row to the DataGridView with the subject instead of the role
                adminTeacherGridView->Rows->Add(gcnew String(name.c_str()), gcnew String(password.c_str()), gcnew String(subject.c_str()));
            }
        }

        file.close();
    }
    
    //To Display Students
    static void DisplayStudentsOnGridView(DataGridView^ adminStudentGridView) {
        // Path to the user.csv file
        std::ifstream file("users.csv");
        if (!file.is_open()) {
            MessageBox::Show("Could not open user.csv file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        // Clear the DataGridView before adding new data
        adminStudentGridView->Rows->Clear();
        adminStudentGridView->Columns->Clear();

        // Define the columns for the DataGridView
        adminStudentGridView->Columns->Add("Name", "Name");
        adminStudentGridView->Columns->Add("Password", "Password");
        adminStudentGridView->Columns->Add("Roll Number", "Roll Number"); // Example of an additional field

        std::string line;
        while (getline(file, line)) {
            std::stringstream ss(line);
            std::string name, password, role, rollNumber;

            // Read the data from the row
            getline(ss, name, ',');
            getline(ss, password, ',');
            getline(ss, role, ',');
            getline(ss, rollNumber, ','); // Additional field for students

            // Check if the role is "Student"
            if (role == "Student") {
                // Add the row to the DataGridView
                adminStudentGridView->Rows->Add(gcnew String(name.c_str()), gcnew String(password.c_str()), gcnew String(rollNumber.c_str()));
            }
        }

        file.close();
    }

};
