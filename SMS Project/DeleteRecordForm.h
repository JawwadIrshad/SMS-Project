#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

namespace SMS_Project {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class DeleteRecordForm : public System::Windows::Forms::Form {

    private:
        String^ role; // Role to determine Teacher or Student

    public:
        // Constructor that accepts a role parameter
        DeleteRecordForm(String^ role)
        {
            InitializeComponent();
            this->role = role;
            label14->Text = "Delete " + role; // Update the title dynamically
        }

    protected:
        ~DeleteRecordForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ signupLabelUsername;
        System::Windows::Forms::Label^ label14;
        System::Windows::Forms::TextBox^ txtName;
        System::Windows::Forms::Button^ btnDeleteRecord;
        System::Windows::Forms::Button^ btnCancel;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->signupLabelUsername = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->txtName = (gcnew System::Windows::Forms::TextBox());
            this->btnDeleteRecord = (gcnew System::Windows::Forms::Button());
            this->btnCancel = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // signupLabelUsername
            // 
            this->signupLabelUsername->AutoSize = true;
            this->signupLabelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
            this->signupLabelUsername->Location = System::Drawing::Point(26, 60);
            this->signupLabelUsername->Name = L"signupLabelUsername";
            this->signupLabelUsername->Size = System::Drawing::Size(49, 19);
            this->signupLabelUsername->TabIndex = 13;
            this->signupLabelUsername->Text = L"Name";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold));
            this->label14->Location = System::Drawing::Point(11, 15);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(120, 30);
            this->label14->TabIndex = 12;
            this->label14->Text = L"Delete Role"; // Placeholder
            // 
            // txtName
            // 
            this->txtName->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
            this->txtName->Location = System::Drawing::Point(30, 82);
            this->txtName->Name = L"txtName";
            this->txtName->Size = System::Drawing::Size(200, 25);
            this->txtName->TabIndex = 9;
            // 
            // btnDeleteRecord
            // 
            this->btnDeleteRecord->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->btnDeleteRecord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnDeleteRecord->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold));
            this->btnDeleteRecord->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnDeleteRecord->Location = System::Drawing::Point(38, 139);
            this->btnDeleteRecord->Name = L"btnDeleteRecord";
            this->btnDeleteRecord->Size = System::Drawing::Size(88, 36);
            this->btnDeleteRecord->TabIndex = 10;
            this->btnDeleteRecord->Text = L"Delete";
            this->btnDeleteRecord->UseVisualStyleBackColor = false;
            this->btnDeleteRecord->Click += gcnew System::EventHandler(this, &DeleteRecordForm::btnDeleteRecord_Click);
            // 
            // btnCancel
            // 
            this->btnCancel->BackColor = System::Drawing::SystemColors::MenuHighlight;
            this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold));
            this->btnCancel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->btnCancel->Location = System::Drawing::Point(138, 139);
            this->btnCancel->Name = L"btnCancel";
            this->btnCancel->Size = System::Drawing::Size(88, 36);
            this->btnCancel->TabIndex = 11;
            this->btnCancel->Text = L"Cancel";
            this->btnCancel->UseVisualStyleBackColor = false;
            this->btnCancel->Click += gcnew System::EventHandler(this, &DeleteRecordForm::btnCancel_Click);
            // 
            // DeleteRecordForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(257, 206);
            this->Controls->Add(this->signupLabelUsername);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->txtName);
            this->Controls->Add(this->btnDeleteRecord);
            this->Controls->Add(this->btnCancel);
            this->Name = L"DeleteRecordForm";
            this->Text = L"DeleteRecordForm";
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private:
        void btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->Close();
        }

        void btnDeleteRecord_Click(System::Object^ sender, System::EventArgs^ e)
        {
            // Get the name from the textbox
            String^ recordName = txtName->Text;

            // Validate input
            if (String::IsNullOrWhiteSpace(recordName)) {
                MessageBox::Show("Please enter a valid name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Convert the String^ to std::string
            std::string recordNameStr = ConvertToStdString(recordName);

            // Open the CSV file to read
            std::ifstream inFile("users.csv");
            if (!inFile.is_open()) {
                MessageBox::Show("Could not open users.csv file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Prepare a vector to store all rows except the deleted one
            std::vector<std::string> rows;
            std::string line;
            bool found = false;

            // Read each line of the CSV
            while (std::getline(inFile, line)) {
                std::stringstream ss(line);
                std::string name, password, role, subject;

                // Parse the line by commas
                std::getline(ss, name, ',');
                std::getline(ss, password, ',');
                std::getline(ss, role, ',');
                std::getline(ss, subject, ',');

                // Check if the row matches the record's name and role
                if (name == recordNameStr && role == ConvertToStdString(this->role)) {
                    found = true;
                    continue; // Skip this line (delete it)
                }

                // Otherwise, add the line to the rows vector
                rows.push_back(line);
            }
            inFile.close();

            // If the record was not found, show an error message
            if (!found) {
                MessageBox::Show(this->role + " not found in the records.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Open the file again for writing (overwrite)
            std::ofstream outFile("users.csv", std::ios::trunc);
            if (!outFile.is_open()) {
                MessageBox::Show("Could not open users.csv file for writing.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Write the remaining rows back to the file
            for (const auto& row : rows) {
                outFile << row << std::endl;
            }
            outFile.close();

            // Show success message
            MessageBox::Show(this->role + " record deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

            // Clear the textbox
            txtName->Text = "";
        }

        // Convert managed String^ to std::string
        static std::string ConvertToStdString(String^ managedString)
        {
            const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(managedString)).ToPointer();
            std::string convertedString(chars);
            System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
            return convertedString;
        }
    };

}
