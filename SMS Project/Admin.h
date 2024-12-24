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
};
