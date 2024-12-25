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
		//Add has two parameter cuz first is its internal-name and second is name
		adminTeacherGridView->Columns->Add("Name", "Name");
		adminTeacherGridView->Columns->Add("Password", "Password");
		adminTeacherGridView->Columns->Add("Role", "Role");

		std::string line;
		while (getline(file, line)) {
			std::stringstream ss(line);
			std::string name, password, role;

			// Read the data from the row
			getline(ss, name, ',');
			getline(ss, password, ',');
			getline(ss, role, ',');

			// Check if the role is "Teacher"
			if (role == "Teacher") {
				// Add the row to the DataGridView
				adminTeacherGridView->Rows->Add(gcnew String(name.c_str()), gcnew String(password.c_str()), gcnew String(role.c_str()));
			}
		}

		file.close();

    }
};
