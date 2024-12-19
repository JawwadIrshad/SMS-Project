#pragma once
#include "AuthUser.h"
#include "DataManager.h"

#include<string>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::Label^ headingLabel;
		System::Windows::Forms::TabControl^ tabControl;
		System::Windows::Forms::TabPage^ loginTab;
		System::Windows::Forms::TabPage^ signupTab;

		// Controls for login form
		System::Windows::Forms::Label^ loginLabelUsername;
		System::Windows::Forms::TextBox^ loginTextboxUsername;
		System::Windows::Forms::Label^ loginLabelPassword;
		System::Windows::Forms::TextBox^ loginTextboxPassword;
		System::Windows::Forms::Button^ loginButton;

		// Controls for sign-up form
		System::Windows::Forms::Label^ signupLabelUsername;
		System::Windows::Forms::TextBox^ signupTextboxUsername;
		System::Windows::Forms::Label^ signupLabelPassword;
		System::Windows::Forms::TextBox^ signupTextboxPassword;
		System::Windows::Forms::Label^ signupLabelConfirmPassword;
		System::Windows::Forms::TextBox^ signupTextboxConfirmPassword;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ courseslabel;

	private: System::Windows::Forms::Label^ gpaLabel;

	private: System::Windows::Forms::Label^ InfoLabel;
	private: System::Windows::Forms::Label^ gpa;
	private: System::Windows::Forms::Button^ logoutBtn;
	private: System::Windows::Forms::Label^ studDisplayNameLabel;

	private: System::Windows::Forms::Label^ namelabel;



		   System::Windows::Forms::Button^ signupButton;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->headingLabel = (gcnew System::Windows::Forms::Label());
			   this->tabControl = (gcnew System::Windows::Forms::TabControl());
			   this->loginTab = (gcnew System::Windows::Forms::TabPage());
			   this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			   this->loginLabelUsername = (gcnew System::Windows::Forms::Label());
			   this->loginTextboxUsername = (gcnew System::Windows::Forms::TextBox());
			   this->loginLabelPassword = (gcnew System::Windows::Forms::Label());
			   this->loginTextboxPassword = (gcnew System::Windows::Forms::TextBox());
			   this->loginButton = (gcnew System::Windows::Forms::Button());
			   this->signupTab = (gcnew System::Windows::Forms::TabPage());
			   this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			   this->signupLabelUsername = (gcnew System::Windows::Forms::Label());
			   this->signupTextboxUsername = (gcnew System::Windows::Forms::TextBox());
			   this->signupLabelPassword = (gcnew System::Windows::Forms::Label());
			   this->signupTextboxPassword = (gcnew System::Windows::Forms::TextBox());
			   this->signupLabelConfirmPassword = (gcnew System::Windows::Forms::Label());
			   this->signupTextboxConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			   this->signupButton = (gcnew System::Windows::Forms::Button());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->studDisplayNameLabel = (gcnew System::Windows::Forms::Label());
			   this->namelabel = (gcnew System::Windows::Forms::Label());
			   this->logoutBtn = (gcnew System::Windows::Forms::Button());
			   this->InfoLabel = (gcnew System::Windows::Forms::Label());
			   this->gpa = (gcnew System::Windows::Forms::Label());
			   this->gpaLabel = (gcnew System::Windows::Forms::Label());
			   this->courseslabel = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tabControl->SuspendLayout();
			   this->loginTab->SuspendLayout();
			   this->signupTab->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // headingLabel
			   // 
			   this->headingLabel->AutoSize = true;
			   this->headingLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			   this->headingLabel->Location = System::Drawing::Point(23, 23);
			   this->headingLabel->Name = L"headingLabel";
			   this->headingLabel->Size = System::Drawing::Size(281, 24);
			   this->headingLabel->TabIndex = 0;
			   this->headingLabel->Text = L"Student Management System";
			   // 
			   // tabControl
			   // 
			   this->tabControl->Controls->Add(this->loginTab);
			   this->tabControl->Controls->Add(this->signupTab);
			   this->tabControl->Controls->Add(this->tabPage1);
			   this->tabControl->Location = System::Drawing::Point(27, 59);
			   this->tabControl->Name = L"tabControl";
			   this->tabControl->SelectedIndex = 0;
			   this->tabControl->Size = System::Drawing::Size(374, 256);
			   this->tabControl->TabIndex = 1;
			   // 
			   // loginTab
			   // 
			   this->loginTab->Controls->Add(this->linkLabel2);
			   this->loginTab->Controls->Add(this->loginLabelUsername);
			   this->loginTab->Controls->Add(this->loginTextboxUsername);
			   this->loginTab->Controls->Add(this->loginLabelPassword);
			   this->loginTab->Controls->Add(this->loginTextboxPassword);
			   this->loginTab->Controls->Add(this->loginButton);
			   this->loginTab->Location = System::Drawing::Point(4, 22);
			   this->loginTab->Name = L"loginTab";
			   this->loginTab->Size = System::Drawing::Size(366, 230);
			   this->loginTab->TabIndex = 0;
			   this->loginTab->Text = L"Login";
			   this->loginTab->UseVisualStyleBackColor = true;
			   // 
			   // linkLabel2
			   // 
			   this->linkLabel2->AutoSize = true;
			   this->linkLabel2->Location = System::Drawing::Point(237, 207);
			   this->linkLabel2->Name = L"linkLabel2";
			   this->linkLabel2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->linkLabel2->Size = System::Drawing::Size(102, 13);
			   this->linkLabel2->TabIndex = 8;
			   this->linkLabel2->TabStop = true;
			   this->linkLabel2->Text = L"Don\'t have Account";
			   this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			   // 
			   // loginLabelUsername
			   // 
			   this->loginLabelUsername->AutoSize = true;
			   this->loginLabelUsername->Location = System::Drawing::Point(10, 20);
			   this->loginLabelUsername->Name = L"loginLabelUsername";
			   this->loginLabelUsername->Size = System::Drawing::Size(58, 13);
			   this->loginLabelUsername->TabIndex = 0;
			   this->loginLabelUsername->Text = L"Username:";
			   // 
			   // loginTextboxUsername
			   // 
			   this->loginTextboxUsername->Location = System::Drawing::Point(100, 20);
			   this->loginTextboxUsername->Name = L"loginTextboxUsername";
			   this->loginTextboxUsername->Size = System::Drawing::Size(100, 20);
			   this->loginTextboxUsername->TabIndex = 1;
			   // 
			   // loginLabelPassword
			   // 
			   this->loginLabelPassword->AutoSize = true;
			   this->loginLabelPassword->Location = System::Drawing::Point(10, 60);
			   this->loginLabelPassword->Name = L"loginLabelPassword";
			   this->loginLabelPassword->Size = System::Drawing::Size(56, 13);
			   this->loginLabelPassword->TabIndex = 2;
			   this->loginLabelPassword->Text = L"Password:";
			   // 
			   // loginTextboxPassword
			   // 
			   this->loginTextboxPassword->Location = System::Drawing::Point(100, 60);
			   this->loginTextboxPassword->Name = L"loginTextboxPassword";
			   this->loginTextboxPassword->Size = System::Drawing::Size(100, 20);
			   this->loginTextboxPassword->TabIndex = 3;
			   // 
			   // loginButton
			   // 
			   this->loginButton->Location = System::Drawing::Point(13, 96);
			   this->loginButton->Name = L"loginButton";
			   this->loginButton->Size = System::Drawing::Size(75, 23);
			   this->loginButton->TabIndex = 4;
			   this->loginButton->Text = L"Login";
			   this->loginButton->Click += gcnew System::EventHandler(this, &Form1::loginButton_Click);
			   // 
			   // signupTab
			   // 
			   this->signupTab->Controls->Add(this->linkLabel1);
			   this->signupTab->Controls->Add(this->signupLabelUsername);
			   this->signupTab->Controls->Add(this->signupTextboxUsername);
			   this->signupTab->Controls->Add(this->signupLabelPassword);
			   this->signupTab->Controls->Add(this->signupTextboxPassword);
			   this->signupTab->Controls->Add(this->signupLabelConfirmPassword);
			   this->signupTab->Controls->Add(this->signupTextboxConfirmPassword);
			   this->signupTab->Controls->Add(this->signupButton);
			   this->signupTab->Location = System::Drawing::Point(4, 22);
			   this->signupTab->Name = L"signupTab";
			   this->signupTab->Size = System::Drawing::Size(366, 230);
			   this->signupTab->TabIndex = 1;
			   this->signupTab->Text = L"Sign Up";
			   this->signupTab->UseVisualStyleBackColor = true;
			   // 
			   // linkLabel1
			   // 
			   this->linkLabel1->AutoSize = true;
			   this->linkLabel1->Location = System::Drawing::Point(240, 206);
			   this->linkLabel1->Name = L"linkLabel1";
			   this->linkLabel1->Size = System::Drawing::Size(112, 13);
			   this->linkLabel1->TabIndex = 7;
			   this->linkLabel1->TabStop = true;
			   this->linkLabel1->Text = L"Already have Account";
			   this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			   // 
			   // signupLabelUsername
			   // 
			   this->signupLabelUsername->AutoSize = true;
			   this->signupLabelUsername->Location = System::Drawing::Point(10, 20);
			   this->signupLabelUsername->Name = L"signupLabelUsername";
			   this->signupLabelUsername->Size = System::Drawing::Size(58, 13);
			   this->signupLabelUsername->TabIndex = 0;
			   this->signupLabelUsername->Text = L"Username:";
			   // 
			   // signupTextboxUsername
			   // 
			   this->signupTextboxUsername->Location = System::Drawing::Point(120, 20);
			   this->signupTextboxUsername->Name = L"signupTextboxUsername";
			   this->signupTextboxUsername->Size = System::Drawing::Size(100, 20);
			   this->signupTextboxUsername->TabIndex = 1;
			   // 
			   // signupLabelPassword
			   // 
			   this->signupLabelPassword->AutoSize = true;
			   this->signupLabelPassword->Location = System::Drawing::Point(10, 60);
			   this->signupLabelPassword->Name = L"signupLabelPassword";
			   this->signupLabelPassword->Size = System::Drawing::Size(56, 13);
			   this->signupLabelPassword->TabIndex = 2;
			   this->signupLabelPassword->Text = L"Password:";
			   // 
			   // signupTextboxPassword
			   // 
			   this->signupTextboxPassword->Location = System::Drawing::Point(120, 60);
			   this->signupTextboxPassword->Name = L"signupTextboxPassword";
			   this->signupTextboxPassword->Size = System::Drawing::Size(100, 20);
			   this->signupTextboxPassword->TabIndex = 3;
			   // 
			   // signupLabelConfirmPassword
			   // 
			   this->signupLabelConfirmPassword->AutoSize = true;
			   this->signupLabelConfirmPassword->Location = System::Drawing::Point(10, 100);
			   this->signupLabelConfirmPassword->Name = L"signupLabelConfirmPassword";
			   this->signupLabelConfirmPassword->Size = System::Drawing::Size(94, 13);
			   this->signupLabelConfirmPassword->TabIndex = 4;
			   this->signupLabelConfirmPassword->Text = L"Confirm Password:";
			   // 
			   // signupTextboxConfirmPassword
			   // 
			   this->signupTextboxConfirmPassword->Location = System::Drawing::Point(120, 100);
			   this->signupTextboxConfirmPassword->Name = L"signupTextboxConfirmPassword";
			   this->signupTextboxConfirmPassword->Size = System::Drawing::Size(100, 20);
			   this->signupTextboxConfirmPassword->TabIndex = 5;
			   // 
			   // signupButton
			   // 
			   this->signupButton->Location = System::Drawing::Point(80, 140);
			   this->signupButton->Name = L"signupButton";
			   this->signupButton->Size = System::Drawing::Size(75, 23);
			   this->signupButton->TabIndex = 6;
			   this->signupButton->Text = L"Sign Up";
			   this->signupButton->Click += gcnew System::EventHandler(this, &Form1::signupButton_Click);
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->label1);
			   this->tabPage1->Controls->Add(this->studDisplayNameLabel);
			   this->tabPage1->Controls->Add(this->namelabel);
			   this->tabPage1->Controls->Add(this->logoutBtn);
			   this->tabPage1->Controls->Add(this->InfoLabel);
			   this->tabPage1->Controls->Add(this->gpa);
			   this->tabPage1->Controls->Add(this->gpaLabel);
			   this->tabPage1->Controls->Add(this->courseslabel);
			   this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			   this->tabPage1->Location = System::Drawing::Point(4, 22);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(366, 230);
			   this->tabPage1->TabIndex = 2;
			   this->tabPage1->Text = L"Student Dashboard";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // studDisplayNameLabel
			   // 
			   this->studDisplayNameLabel->AutoSize = true;
			   this->studDisplayNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->studDisplayNameLabel->Location = System::Drawing::Point(10, 51);
			   this->studDisplayNameLabel->Name = L"studDisplayNameLabel";
			   this->studDisplayNameLabel->Size = System::Drawing::Size(33, 19);
			   this->studDisplayNameLabel->TabIndex = 9;
			   this->studDisplayNameLabel->Text = L"----";
			   // 
			   // namelabel
			   // 
			   this->namelabel->AutoSize = true;
			   this->namelabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			   this->namelabel->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->namelabel->Location = System::Drawing::Point(6, 34);
			   this->namelabel->Name = L"namelabel";
			   this->namelabel->Size = System::Drawing::Size(39, 16);
			   this->namelabel->TabIndex = 8;
			   this->namelabel->Text = L"Name";
			   // 
			   // logoutBtn
			   // 
			   this->logoutBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			   this->logoutBtn->Location = System::Drawing::Point(294, 6);
			   this->logoutBtn->Name = L"logoutBtn";
			   this->logoutBtn->Size = System::Drawing::Size(66, 23);
			   this->logoutBtn->TabIndex = 7;
			   this->logoutBtn->Text = L"Log out";
			   this->logoutBtn->UseVisualStyleBackColor = true;
			   this->logoutBtn->Click += gcnew System::EventHandler(this, &Form1::logoutBtn_Click);
			   // 
			   // InfoLabel
			   // 
			   this->InfoLabel->AutoSize = true;
			   this->InfoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->InfoLabel->Location = System::Drawing::Point(6, 12);
			   this->InfoLabel->Name = L"InfoLabel";
			   this->InfoLabel->Size = System::Drawing::Size(35, 19);
			   this->InfoLabel->TabIndex = 6;
			   this->InfoLabel->Text = L"Info";
			   // 
			   // gpa
			   // 
			   this->gpa->AutoSize = true;
			   this->gpa->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold));
			   this->gpa->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->gpa->Location = System::Drawing::Point(172, 42);
			   this->gpa->Name = L"gpa";
			   this->gpa->Size = System::Drawing::Size(57, 28);
			   this->gpa->TabIndex = 5;
			   this->gpa->Text = L"0.00";
			   // 
			   // gpaLabel
			   // 
			   this->gpaLabel->AutoSize = true;
			   this->gpaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->gpaLabel->Location = System::Drawing::Point(153, 12);
			   this->gpaLabel->Name = L"gpaLabel";
			   this->gpaLabel->Size = System::Drawing::Size(42, 19);
			   this->gpaLabel->TabIndex = 4;
			   this->gpaLabel->Text = L"GPA:";
			   // 
			   // courseslabel
			   // 
			   this->courseslabel->AutoSize = true;
			   this->courseslabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->courseslabel->Location = System::Drawing::Point(5, 74);
			   this->courseslabel->Name = L"courseslabel";
			   this->courseslabel->Size = System::Drawing::Size(61, 19);
			   this->courseslabel->TabIndex = 3;
			   this->courseslabel->Text = L"Courses";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::Red;
			   this->label1->Location = System::Drawing::Point(110, 78);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(159, 19);
			   this->label1->TabIndex = 2;
			   this->label1->Text = L"Log In Or Sign Up First";
			   this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel1->BackColor = System::Drawing::Color::WhiteSmoke;
			   this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			   this->tableLayoutPanel1->ColumnCount = 3;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33333F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33334F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   33.33334F)));
			   this->tableLayoutPanel1->Location = System::Drawing::Point(6, 101);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 5;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.2768F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(354, 123);
			   this->tableLayoutPanel1->TabIndex = 0;
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(413, 327);
			   this->Controls->Add(this->headingLabel);
			   this->Controls->Add(this->tabControl);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->Name = L"Form1";
			   this->Text = L"Student Management System";
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   this->tabControl->ResumeLayout(false);
			   this->loginTab->ResumeLayout(false);
			   this->loginTab->PerformLayout();
			   this->signupTab->ResumeLayout(false);
			   this->signupTab->PerformLayout();
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage1->PerformLayout();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
		   
#pragma endregion
	private: System::Void signupButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Directly convert System::String^ to std::string
		std::string username = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(signupTextboxUsername->Text).ToPointer());
		std::string password = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(signupTextboxPassword->Text).ToPointer());
		std::string confirmPassword = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(signupTextboxConfirmPassword->Text).ToPointer());

		if (password != confirmPassword) {
			MessageBox::Show("Passwords do not match.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		AuthUser user(username, password);
		if (user.signup()) {
			MessageBox::Show("Sign-up successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("User already exists.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//function to disable and enable the things of dashboard
	void ItemsOnStudentDashBoard(bool a) {
		InfoLabel->Visible = a;
		namelabel->Visible = a;
		studDisplayNameLabel->Visible = a;
		gpaLabel->Visible = a;
		gpa->Visible = a;
		courseslabel->Visible = a;
		tableLayoutPanel1->Visible = a;
		logoutBtn->Visible = a;
	}
	
	//Creating a global user pointer instance or whatever this is 
	AuthUser* currentUser = nullptr; // Global pointer to store the logged-in user
	
	
	
		   
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Convert System::String^ to std::string in the same way
		std::string username = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxUsername->Text).ToPointer());
		std::string password = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxPassword->Text).ToPointer());
		AuthUser user(username, password);
		//clear the input boxeses
		loginTextboxUsername->Clear();
		loginTextboxPassword->Clear();
		//using overloaded operator assining unmanaged to managed
		currentUser = new  AuthUser(user);
		//now setting the student name feild info in student dashboard
		//converted to currentUser->getUsername to managed string then assinged
		studDisplayNameLabel->Text = gcnew String(currentUser->getUsername().c_str());
		//creating data manager object and setting marks for student TESTING PURPOSES Teacher will set this later ON
		array<String^>^ MarksOFCourses = {"45", "23", "21" , "99", "55", "56"};
		DataManager dmanager(MarksOFCourses);
		dmanager.DisplayCourses(tableLayoutPanel1);
		gpa->Text = dmanager.CalculateGPA(MarksOFCourses).ToString("F2");
		

		if (user.login()) {
			MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			tabControl->SelectedTab = tabControl->TabPages[2];
			label1->Visible = false;
			//Enable all things in student dashboard
			ItemsOnStudentDashBoard(true);
			
		}
		else {
			MessageBox::Show("Invalid username or password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			label1->Visible = true;
			//disable all things on student dashboard
			ItemsOnStudentDashBoard(false);
		}
	}



	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		tabControl->SelectedTab = tabControl->TabPages[1];
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		tabControl->SelectedTab = tabControl->TabPages[0];

	}

		private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		// Hide all components on the Student Dashboard tab if the user is not logged in
		label1->Visible = true;  // Show the "Login or Signup first" placeholder
		//disable all items on student dashboard ON FORM LOAD
		ItemsOnStudentDashBoard(false);
	}

	private: System::Void logoutBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//assing null to poitner
		currentUser = NULL;
		tabControl->SelectedTab = tabControl->TabPages[0];
		tableLayoutPanel1->Controls->Clear();
		ItemsOnStudentDashBoard(false);
		label1->Visible = true;

	}




};
}