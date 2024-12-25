#pragma once
#include<fstream>
#include<sstream>
#include<string>
namespace SMS_Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for AddTeacherForm
	/// </summary>
	public ref class AddTeacherForm : public System::Windows::Forms::Form
	{
	public:
		AddTeacherForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddTeacherForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		// Declare the controls you need
		System::Windows::Forms::TextBox^ txtName;
		System::Windows::Forms::TextBox^ txtPassword;
		System::Windows::Forms::TextBox^ txtSubject;
		System::Windows::Forms::Button^ btnAddTeacher;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ signupLabelUsername;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
		   System::Windows::Forms::Button^ btnCancel;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtSubject = (gcnew System::Windows::Forms::TextBox());
			this->btnAddTeacher = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->signupLabelUsername = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtName
			// 
			this->txtName->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->txtName->Location = System::Drawing::Point(31, 79);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(200, 25);
			this->txtName->TabIndex = 0;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->txtPassword->Location = System::Drawing::Point(31, 134);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(200, 25);
			this->txtPassword->TabIndex = 1;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// txtSubject
			// 
			this->txtSubject->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txtSubject->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtSubject->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->txtSubject->Location = System::Drawing::Point(31, 192);
			this->txtSubject->Name = L"txtSubject";
			this->txtSubject->Size = System::Drawing::Size(200, 25);
			this->txtSubject->TabIndex = 2;
			// 
			// btnAddTeacher
			// 
			this->btnAddTeacher->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnAddTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddTeacher->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAddTeacher->Location = System::Drawing::Point(43, 242);
			this->btnAddTeacher->Name = L"btnAddTeacher";
			this->btnAddTeacher->Size = System::Drawing::Size(88, 36);
			this->btnAddTeacher->TabIndex = 3;
			this->btnAddTeacher->Text = L"Add";
			this->btnAddTeacher->UseVisualStyleBackColor = false;
			this->btnAddTeacher->Click += gcnew System::EventHandler(this, &AddTeacherForm::btnAddTeacher_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCancel->Location = System::Drawing::Point(143, 242);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(88, 36);
			this->btnCancel->TabIndex = 4;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &AddTeacherForm::btnCancel_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(12, 12);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(134, 30);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Add Teacher";
			// 
			// signupLabelUsername
			// 
			this->signupLabelUsername->AutoSize = true;
			this->signupLabelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			this->signupLabelUsername->Location = System::Drawing::Point(27, 57);
			this->signupLabelUsername->Name = L"signupLabelUsername";
			this->signupLabelUsername->Size = System::Drawing::Size(49, 19);
			this->signupLabelUsername->TabIndex = 8;
			this->signupLabelUsername->Text = L"Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(27, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 19);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(27, 170);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 19);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Subject";
			// 
			// AddTeacherForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(266, 290);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->signupLabelUsername);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtSubject);
			this->Controls->Add(this->btnAddTeacher);
			this->Controls->Add(this->btnCancel);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddTeacherForm";
			this->Text = L"Add Teacher";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void btnAddTeacher_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Get the teacher's information from the TextBoxes
			String^ name = txtName->Text;
			String^ password = txtPassword->Text;
			String^ subject = txtSubject->Text;

			// Validate input: Check if any field is empty
			if (String::IsNullOrEmpty(name) || String::IsNullOrEmpty(password) || String::IsNullOrEmpty(subject)) {
				// Display an error message if any field is empty
				MessageBox::Show("All fields are required. Please fill in the name, password, and subject.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return; // Exit the function without saving data
			}

			// Convert System::String to const char* using Marshal
			const char* nameStr = (const char*)Marshal::StringToHGlobalAnsi(name).ToPointer();
			const char* passwordStr = (const char*)Marshal::StringToHGlobalAnsi(password).ToPointer();
			const char* subjectStr = (const char*)Marshal::StringToHGlobalAnsi(subject).ToPointer();

			// Open the file (create if not exists, append if exists)
			std::ofstream outFile("users.csv", std::ios::app); // Open in append mode

			if (outFile.is_open()) {
				// Write data to the CSV file
				outFile << nameStr << "," << passwordStr << "," << "Teacher," << subjectStr << std::endl;
				//outFile << nameStr << "," << passwordStr << "," <<"Teacher"<< std::endl;

				// Display success message
				MessageBox::Show("Teacher Added:\nName: " + name + "\nSubject: " + subject);

				outFile.close(); // Close the file after writing
			}
			else {
				// Display error message if file can't be opened
				MessageBox::Show("Error: Unable to open the file.");
			}

			// Free unmanaged memory after usage
			Marshal::FreeHGlobal(IntPtr((void*)nameStr));
			Marshal::FreeHGlobal(IntPtr((void*)passwordStr));
			Marshal::FreeHGlobal(IntPtr((void*)subjectStr));
		}

		// Handle the Cancel button click event
		void btnCancel_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->Close();
		}
	};
}
