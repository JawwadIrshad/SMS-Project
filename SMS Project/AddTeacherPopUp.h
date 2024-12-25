#pragma once
#include <fstream>
#include <string>
#include <msclr/marshal.h>
using namespace System;
using namespace System::Windows::Forms;

public ref class AddTeacherPopUp : public Form
{
private:
    TextBox^ teacherNameTextBox;
    TextBox^ passwordTextBox;
    TextBox^ roleTextBox;
    Button^ addButton;

public:
    AddTeacherPopUp()
    {
        // Initialize the form
        this->Text = "Add Teacher";
        this->Size = System::Drawing::Size(300, 250);

        // Initialize TeacherName TextBox
        Label^ teacherNameLabel = gcnew Label();
        teacherNameLabel->Text = "Teacher Name:";
        teacherNameLabel->Location = System::Drawing::Point(10, 20);
        this->Controls->Add(teacherNameLabel);

        teacherNameTextBox = gcnew TextBox();
        teacherNameTextBox->Location = System::Drawing::Point(120, 20);
        this->Controls->Add(teacherNameTextBox);

        // Initialize Password TextBox
        Label^ passwordLabel = gcnew Label();
        passwordLabel->Text = "Password:";
        passwordLabel->Location = System::Drawing::Point(10, 60);
        this->Controls->Add(passwordLabel);

        passwordTextBox = gcnew TextBox();
        passwordTextBox->Location = System::Drawing::Point(120, 60);
        this->Controls->Add(passwordTextBox);

        // Initialize Role TextBox
        Label^ roleLabel = gcnew Label();
        roleLabel->Text = "Role:";
        roleLabel->Location = System::Drawing::Point(10, 100);
        this->Controls->Add(roleLabel);

        roleTextBox = gcnew TextBox();
        roleTextBox->Text = "Teacher"; // Default value
        roleTextBox->Location = System::Drawing::Point(120, 100);
        this->Controls->Add(roleTextBox);

        // Initialize Add Button
        addButton = gcnew Button();
        addButton->Text = "Add";
        addButton->Location = System::Drawing::Point(100, 150);
        addButton->Click += gcnew EventHandler(this, &AddTeacherPopUp::OnAddButtonClick);
        this->Controls->Add(addButton);
    }

private:
    void OnAddButtonClick(Object^ sender, EventArgs^ e)
    {
        // Get data from TextBoxes
        String^ teacherName = teacherNameTextBox->Text;
        String^ password = passwordTextBox->Text;
        String^ role = roleTextBox->Text;

        // Validate inputs
        if (String::IsNullOrEmpty(teacherName) || String::IsNullOrEmpty(password) || String::IsNullOrEmpty(role))
        {
            MessageBox::Show("All fields are required!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        // Convert managed strings to std::string
        std::string teacherNameStr = msclr::interop::marshal_as<std::string>(teacherName);
        std::string passwordStr = msclr::interop::marshal_as<std::string>(password);
        std::string roleStr = msclr::interop::marshal_as<std::string>(role);

        // Append data to users.csv
        std::ofstream file("users.csv", std::ios::app);
        if (!file.is_open())
        {
            MessageBox::Show("Could not open users.csv file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        file << teacherNameStr << "," << passwordStr << "," << roleStr << "\n";
        file.close();

        // Confirm success
        MessageBox::Show("Teacher added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

        // Close the popup
        this->Close();
    }
};
