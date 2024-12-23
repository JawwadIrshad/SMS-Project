#pragma once
#include "AuthUser.h"
#include "DataManager.h"
#include "Teacher.h"
#include "CustomTextBox.h"
#include<string>
#include<iostream>
#include <fstream>



namespace CppCLRWinFormsProject {
	                                                          
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
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


	private: System::Windows::Forms::Label^ courseslabel;

	private: System::Windows::Forms::Label^ gpaLabel;

	private: System::Windows::Forms::Label^ InfoLabel;
	private: System::Windows::Forms::Label^ gpa;
	private: System::Windows::Forms::Button^ logoutBtn;
	private: System::Windows::Forms::Label^ studDisplayNameLabel;

	private: System::Windows::Forms::Label^ namelabel;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label2;











	private: System::Windows::Forms::Label^ roll;
	private: System::Windows::Forms::Label^ rolllabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ TeacherLogoutBtn;

	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ loginstudentradioButton1;
	private: System::Windows::Forms::RadioButton^ isTeacher;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Label^ loginLabelUsername;
	private: System::Windows::Forms::TextBox^ loginTextboxUsername;
	private: System::Windows::Forms::Label^ loginLabelPassword;
	private: System::Windows::Forms::TextBox^ loginTextboxPassword;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Button^ teacherSaveMarksBtn;

	private: System::Windows::Forms::Button^ assignMarksButton;











		   System::Windows::Forms::Button^ signupButton;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->headingLabel = (gcnew System::Windows::Forms::Label());
			   this->tabControl = (gcnew System::Windows::Forms::TabControl());
			   this->loginTab = (gcnew System::Windows::Forms::TabPage());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->loginstudentradioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->isTeacher = (gcnew System::Windows::Forms::RadioButton());
			   this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			   this->loginLabelUsername = (gcnew System::Windows::Forms::Label());
			   this->loginTextboxUsername = (gcnew System::Windows::Forms::TextBox());
			   this->loginLabelPassword = (gcnew System::Windows::Forms::Label());
			   this->loginTextboxPassword = (gcnew System::Windows::Forms::TextBox());
			   this->loginButton = (gcnew System::Windows::Forms::Button());
			   this->label3 = (gcnew System::Windows::Forms::Label());
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
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->roll = (gcnew System::Windows::Forms::Label());
			   this->rolllabel = (gcnew System::Windows::Forms::Label());
			   this->studDisplayNameLabel = (gcnew System::Windows::Forms::Label());
			   this->namelabel = (gcnew System::Windows::Forms::Label());
			   this->logoutBtn = (gcnew System::Windows::Forms::Button());
			   this->InfoLabel = (gcnew System::Windows::Forms::Label());
			   this->gpa = (gcnew System::Windows::Forms::Label());
			   this->gpaLabel = (gcnew System::Windows::Forms::Label());
			   this->courseslabel = (gcnew System::Windows::Forms::Label());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->TeacherLogoutBtn = (gcnew System::Windows::Forms::Button());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->assignMarksButton = (gcnew System::Windows::Forms::Button());
			   this->teacherSaveMarksBtn = (gcnew System::Windows::Forms::Button());
			   this->tabControl->SuspendLayout();
			   this->loginTab->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->signupTab->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   this->tabPage2->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // headingLabel
			   // 
			   this->headingLabel->AutoSize = true;
			   this->headingLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->headingLabel->Location = System::Drawing::Point(12, 9);
			   this->headingLabel->Name = L"headingLabel";
			   this->headingLabel->Size = System::Drawing::Size(274, 25);
			   this->headingLabel->TabIndex = 0;
			   this->headingLabel->Text = L"Student Management System";
			   // 
			   // tabControl
			   // 
			   this->tabControl->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			   this->tabControl->Controls->Add(this->loginTab);
			   this->tabControl->Controls->Add(this->signupTab);
			   this->tabControl->Controls->Add(this->tabPage1);
			   this->tabControl->Controls->Add(this->tabPage2);
			   this->tabControl->Location = System::Drawing::Point(2, 51);
			   this->tabControl->Name = L"tabControl";
			   this->tabControl->SelectedIndex = 0;
			   this->tabControl->Size = System::Drawing::Size(902, 563);
			   this->tabControl->TabIndex = 1;
			   // 
			   // loginTab
			   // 
			   this->loginTab->BackColor = System::Drawing::Color::White;
			   this->loginTab->Controls->Add(this->comboBox1);
			   this->loginTab->Controls->Add(this->pictureBox1);
			   this->loginTab->Controls->Add(this->label5);
			   this->loginTab->Controls->Add(this->label4);
			   this->loginTab->Controls->Add(this->loginstudentradioButton1);
			   this->loginTab->Controls->Add(this->isTeacher);
			   this->loginTab->Controls->Add(this->linkLabel2);
			   this->loginTab->Controls->Add(this->loginLabelUsername);
			   this->loginTab->Controls->Add(this->loginTextboxUsername);
			   this->loginTab->Controls->Add(this->loginLabelPassword);
			   this->loginTab->Controls->Add(this->loginTextboxPassword);
			   this->loginTab->Controls->Add(this->loginButton);
			   this->loginTab->Controls->Add(this->label3);
			   this->loginTab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->loginTab->Location = System::Drawing::Point(4, 25);
			   this->loginTab->Name = L"loginTab";
			   this->loginTab->Size = System::Drawing::Size(894, 534);
			   this->loginTab->TabIndex = 0;
			   this->loginTab->Text = L"Login";
			   this->loginTab->Click += gcnew System::EventHandler(this, &Form1::loginTab_Click);
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"OC", L"OOP", L"OOP-LAB", L"Discrete", L"Calculus" });
			   this->comboBox1->Location = System::Drawing::Point(32, 339);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(248, 28);
			   this->comboBox1->TabIndex = 23;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(401, 122);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Padding = System::Windows::Forms::Padding(100);
			   this->pictureBox1->Size = System::Drawing::Size(382, 264);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox1->TabIndex = 22;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label5->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->label5->Location = System::Drawing::Point(28, 65);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(105, 19);
			   this->label5->TabIndex = 21;
			   this->label5->Text = L"Welcome back!";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Bold));
			   this->label4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->label4->Location = System::Drawing::Point(26, 40);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(125, 23);
			   this->label4->TabIndex = 20;
			   this->label4->Text = L"HJ Developers";
			   this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			   // 
			   // loginstudentradioButton1
			   // 
			   this->loginstudentradioButton1->AutoSize = true;
			   this->loginstudentradioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->loginstudentradioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			   this->loginstudentradioButton1->Location = System::Drawing::Point(187, 373);
			   this->loginstudentradioButton1->Name = L"loginstudentradioButton1";
			   this->loginstudentradioButton1->Size = System::Drawing::Size(69, 17);
			   this->loginstudentradioButton1->TabIndex = 19;
			   this->loginstudentradioButton1->TabStop = true;
			   this->loginstudentradioButton1->Text = L"Student";
			   this->loginstudentradioButton1->UseVisualStyleBackColor = true;
			   // 
			   // isTeacher
			   // 
			   this->isTeacher->AutoSize = true;
			   this->isTeacher->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->isTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			   this->isTeacher->Location = System::Drawing::Point(37, 373);
			   this->isTeacher->Name = L"isTeacher";
			   this->isTeacher->Size = System::Drawing::Size(72, 17);
			   this->isTeacher->TabIndex = 18;
			   this->isTeacher->TabStop = true;
			   this->isTeacher->Text = L"Teacher";
			   this->isTeacher->UseVisualStyleBackColor = true;
			   // 
			   // linkLabel2
			   // 
			   this->linkLabel2->AutoSize = true;
			   this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->linkLabel2->Location = System::Drawing::Point(89, 490);
			   this->linkLabel2->Name = L"linkLabel2";
			   this->linkLabel2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->linkLabel2->Size = System::Drawing::Size(108, 13);
			   this->linkLabel2->TabIndex = 17;
			   this->linkLabel2->TabStop = true;
			   this->linkLabel2->Text = L"Don\'t have Account";
			   // 
			   // loginLabelUsername
			   // 
			   this->loginLabelUsername->AutoSize = true;
			   this->loginLabelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->loginLabelUsername->Location = System::Drawing::Point(29, 171);
			   this->loginLabelUsername->Name = L"loginLabelUsername";
			   this->loginLabelUsername->Size = System::Drawing::Size(80, 19);
			   this->loginLabelUsername->TabIndex = 12;
			   this->loginLabelUsername->Text = L"Username:";
			   // 
			   // loginTextboxUsername
			   // 
			   this->loginTextboxUsername->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->loginTextboxUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->loginTextboxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->loginTextboxUsername->HideSelection = false;
			   this->loginTextboxUsername->Location = System::Drawing::Point(32, 202);
			   this->loginTextboxUsername->MinimumSize = System::Drawing::Size(0, 30);
			   this->loginTextboxUsername->Name = L"loginTextboxUsername";
			   this->loginTextboxUsername->Size = System::Drawing::Size(248, 28);
			   this->loginTextboxUsername->TabIndex = 13;
			   // 
			   // loginLabelPassword
			   // 
			   this->loginLabelPassword->AutoSize = true;
			   this->loginLabelPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->loginLabelPassword->Location = System::Drawing::Point(28, 244);
			   this->loginLabelPassword->Name = L"loginLabelPassword";
			   this->loginLabelPassword->Size = System::Drawing::Size(77, 19);
			   this->loginLabelPassword->TabIndex = 14;
			   this->loginLabelPassword->Text = L"Password:";
			   // 
			   // loginTextboxPassword
			   // 
			   this->loginTextboxPassword->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->loginTextboxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->loginTextboxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->loginTextboxPassword->Location = System::Drawing::Point(32, 276);
			   this->loginTextboxPassword->MinimumSize = System::Drawing::Size(0, 30);
			   this->loginTextboxPassword->Name = L"loginTextboxPassword";
			   this->loginTextboxPassword->PasswordChar = '•';
			   this->loginTextboxPassword->Size = System::Drawing::Size(248, 28);
			   this->loginTextboxPassword->TabIndex = 15;
			   this->loginTextboxPassword->UseSystemPasswordChar = true;
			   this->loginTextboxPassword->TextChanged += gcnew System::EventHandler(this, &Form1::loginTextboxPassword_TextChanged);
			   // 
			   // loginButton
			   // 
			   this->loginButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->loginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F, System::Drawing::FontStyle::Bold));
			   this->loginButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			   this->loginButton->Location = System::Drawing::Point(37, 417);
			   this->loginButton->Name = L"loginButton";
			   this->loginButton->Size = System::Drawing::Size(79, 30);
			   this->loginButton->TabIndex = 16;
			   this->loginButton->Text = L"Login";
			   this->loginButton->UseVisualStyleBackColor = true;
			   this->loginButton->Click += gcnew System::EventHandler(this, &Form1::loginButton_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(24, 96);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(123, 47);
			   this->label3->TabIndex = 11;
			   this->label3->Text = L"Log In";
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
			   this->signupTab->Location = System::Drawing::Point(4, 25);
			   this->signupTab->Name = L"signupTab";
			   this->signupTab->Size = System::Drawing::Size(894, 534);
			   this->signupTab->TabIndex = 1;
			   this->signupTab->Text = L"Sign Up";
			   this->signupTab->UseVisualStyleBackColor = true;
			   this->signupTab->Click += gcnew System::EventHandler(this, &Form1::signupButton_Click);
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
			   this->signupLabelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->signupLabelUsername->Location = System::Drawing::Point(10, 20);
			   this->signupLabelUsername->Name = L"signupLabelUsername";
			   this->signupLabelUsername->Size = System::Drawing::Size(67, 15);
			   this->signupLabelUsername->TabIndex = 0;
			   this->signupLabelUsername->Text = L"Username:";
			   // 
			   // signupTextboxUsername
			   // 
			   this->signupTextboxUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->signupTextboxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->signupTextboxUsername->Location = System::Drawing::Point(13, 36);
			   this->signupTextboxUsername->Name = L"signupTextboxUsername";
			   this->signupTextboxUsername->Size = System::Drawing::Size(162, 26);
			   this->signupTextboxUsername->TabIndex = 1;
			   // 
			   // signupLabelPassword
			   // 
			   this->signupLabelPassword->AutoSize = true;
			   this->signupLabelPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->signupLabelPassword->Location = System::Drawing::Point(10, 66);
			   this->signupLabelPassword->Name = L"signupLabelPassword";
			   this->signupLabelPassword->Size = System::Drawing::Size(62, 15);
			   this->signupLabelPassword->TabIndex = 2;
			   this->signupLabelPassword->Text = L"Password:";
			   // 
			   // signupTextboxPassword
			   // 
			   this->signupTextboxPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->signupTextboxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->signupTextboxPassword->Location = System::Drawing::Point(13, 82);
			   this->signupTextboxPassword->Name = L"signupTextboxPassword";
			   this->signupTextboxPassword->Size = System::Drawing::Size(162, 26);
			   this->signupTextboxPassword->TabIndex = 3;
			   // 
			   // signupLabelConfirmPassword
			   // 
			   this->signupLabelConfirmPassword->AutoSize = true;
			   this->signupLabelConfirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->signupLabelConfirmPassword->Location = System::Drawing::Point(10, 112);
			   this->signupLabelConfirmPassword->Name = L"signupLabelConfirmPassword";
			   this->signupLabelConfirmPassword->Size = System::Drawing::Size(110, 15);
			   this->signupLabelConfirmPassword->TabIndex = 4;
			   this->signupLabelConfirmPassword->Text = L"Confirm Password:";
			   // 
			   // signupTextboxConfirmPassword
			   // 
			   this->signupTextboxConfirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->signupTextboxConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			   this->signupTextboxConfirmPassword->Location = System::Drawing::Point(13, 128);
			   this->signupTextboxConfirmPassword->Name = L"signupTextboxConfirmPassword";
			   this->signupTextboxConfirmPassword->Size = System::Drawing::Size(162, 26);
			   this->signupTextboxConfirmPassword->TabIndex = 5;
			   // 
			   // signupButton
			   // 
			   this->signupButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->signupButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->signupButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->signupButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->signupButton->Location = System::Drawing::Point(13, 163);
			   this->signupButton->Name = L"signupButton";
			   this->signupButton->Size = System::Drawing::Size(88, 33);
			   this->signupButton->TabIndex = 6;
			   this->signupButton->Text = L"Sign Up";
			   this->signupButton->UseVisualStyleBackColor = false;
			   this->signupButton->Click += gcnew System::EventHandler(this, &Form1::signupButton_Click);
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->label1);
			   this->tabPage1->Controls->Add(this->roll);
			   this->tabPage1->Controls->Add(this->rolllabel);
			   this->tabPage1->Controls->Add(this->studDisplayNameLabel);
			   this->tabPage1->Controls->Add(this->namelabel);
			   this->tabPage1->Controls->Add(this->logoutBtn);
			   this->tabPage1->Controls->Add(this->InfoLabel);
			   this->tabPage1->Controls->Add(this->gpa);
			   this->tabPage1->Controls->Add(this->gpaLabel);
			   this->tabPage1->Controls->Add(this->courseslabel);
			   this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			   this->tabPage1->Location = System::Drawing::Point(4, 25);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(894, 534);
			   this->tabPage1->TabIndex = 2;
			   this->tabPage1->Text = L"Student Dashboard";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::Red;
			   this->label1->Location = System::Drawing::Point(96, 79);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(159, 19);
			   this->label1->TabIndex = 12;
			   this->label1->Text = L"Log In Or Sign Up First";
			   // 
			   // roll
			   // 
			   this->roll->AutoSize = true;
			   this->roll->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->roll->Location = System::Drawing::Point(133, 51);
			   this->roll->Name = L"roll";
			   this->roll->Size = System::Drawing::Size(33, 19);
			   this->roll->TabIndex = 11;
			   this->roll->Text = L"----";
			   // 
			   // rolllabel
			   // 
			   this->rolllabel->AutoSize = true;
			   this->rolllabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			   this->rolllabel->ForeColor = System::Drawing::SystemColors::WindowFrame;
			   this->rolllabel->Location = System::Drawing::Point(129, 34);
			   this->rolllabel->Name = L"rolllabel";
			   this->rolllabel->Size = System::Drawing::Size(28, 16);
			   this->rolllabel->TabIndex = 10;
			   this->rolllabel->Text = L"Roll";
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
			   this->gpa->Location = System::Drawing::Point(212, 44);
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
			   this->gpaLabel->Location = System::Drawing::Point(213, 14);
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
			   this->tableLayoutPanel1->Size = System::Drawing::Size(354, 120);
			   this->tableLayoutPanel1->TabIndex = 0;
			   // 
			   // tabPage2
			   // 
			   this->tabPage2->Controls->Add(this->panel1);
			   this->tabPage2->Location = System::Drawing::Point(4, 25);
			   this->tabPage2->Name = L"tabPage2";
			   this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage2->Size = System::Drawing::Size(894, 534);
			   this->tabPage2->TabIndex = 3;
			   this->tabPage2->Text = L"Teacher Dashboard";
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // panel1
			   // 
			   this->panel1->AutoScroll = true;
			   this->panel1->Controls->Add(this->teacherSaveMarksBtn);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->TeacherLogoutBtn);
			   this->panel1->Controls->Add(this->assignMarksButton);
			   this->panel1->Controls->Add(this->dataGridView1);
			   this->panel1->Location = System::Drawing::Point(0, 3);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(366, 224);
			   this->panel1->TabIndex = 5;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::Red;
			   this->label2->Location = System::Drawing::Point(107, 68);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(159, 19);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Log In Or Sign Up First";
			   // 
			   // TeacherLogoutBtn
			   // 
			   this->TeacherLogoutBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 8, System::Drawing::FontStyle::Bold));
			   this->TeacherLogoutBtn->Location = System::Drawing::Point(294, 6);
			   this->TeacherLogoutBtn->Name = L"TeacherLogoutBtn";
			   this->TeacherLogoutBtn->Size = System::Drawing::Size(66, 23);
			   this->TeacherLogoutBtn->TabIndex = 8;
			   this->TeacherLogoutBtn->Text = L"Log out";
			   this->TeacherLogoutBtn->UseVisualStyleBackColor = true;
			   this->TeacherLogoutBtn->Click += gcnew System::EventHandler(this, &Form1::logoutBtn_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->Column1,
					   this->Column2, this->Column3
			   });
			   this->dataGridView1->Location = System::Drawing::Point(3, 68);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->Size = System::Drawing::Size(350, 150);
			   this->dataGridView1->TabIndex = 0;
			   // 
			   // Column1
			   // 
			   this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			   this->Column1->HeaderText = L"Column1";
			   this->Column1->Name = L"Column1";
			   // 
			   // Column2
			   // 
			   this->Column2->HeaderText = L"Column2";
			   this->Column2->Name = L"Column2";
			   // 
			   // Column3
			   // 
			   this->Column3->HeaderText = L"Column3";
			   this->Column3->Name = L"Column3";
			   // 
			   // assignMarksButton
			   // 
			   this->assignMarksButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->assignMarksButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->assignMarksButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F, System::Drawing::FontStyle::Bold));
			   this->assignMarksButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			   this->assignMarksButton->Location = System::Drawing::Point(7, 24);
			   this->assignMarksButton->Name = L"assignMarksButton";
			   this->assignMarksButton->Size = System::Drawing::Size(116, 30);
			   this->assignMarksButton->TabIndex = 5;
			   this->assignMarksButton->Text = L"Load Marks";
			   this->assignMarksButton->UseVisualStyleBackColor = false;
			   this->assignMarksButton->Click += gcnew System::EventHandler(this, &Form1::saveMarksBtn_Click);
			   // 
			   // teacherSaveMarksBtn
			   // 
			   this->teacherSaveMarksBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->teacherSaveMarksBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			   this->teacherSaveMarksBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F, System::Drawing::FontStyle::Bold));
			   this->teacherSaveMarksBtn->ForeColor = System::Drawing::SystemColors::MenuBar;
			   this->teacherSaveMarksBtn->Location = System::Drawing::Point(150, 23);
			   this->teacherSaveMarksBtn->Name = L"teacherSaveMarksBtn";
			   this->teacherSaveMarksBtn->Size = System::Drawing::Size(116, 30);
			   this->teacherSaveMarksBtn->TabIndex = 9;
			   this->teacherSaveMarksBtn->Text = L"Save Marks";
			   this->teacherSaveMarksBtn->UseVisualStyleBackColor = false;
			   this->teacherSaveMarksBtn->Click += gcnew System::EventHandler(this, &Form1::teacherSaveMarksBtn_Click);
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(904, 614);
			   this->Controls->Add(this->headingLabel);
			   this->Controls->Add(this->tabControl);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			   this->MaximizeBox = false;
			   this->Name = L"Form1";
			   this->Text = L"Student Management System";
			   this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			   this->tabControl->ResumeLayout(false);
			   this->loginTab->ResumeLayout(false);
			   this->loginTab->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->signupTab->ResumeLayout(false);
			   this->signupTab->PerformLayout();
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage1->PerformLayout();
			   this->tabPage2->ResumeLayout(false);
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

			  
		   }
#pragma endregion

		   //Creating a global user pointer instance or whatever this is 
		   AuthUser* currentUser = nullptr; // Global pointer to store the logged-in user
		 
		  private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
			  std::string username = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxUsername->Text).ToPointer());
			  std::string password = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxPassword->Text).ToPointer());
			  std::string role;
			  
			  if (currentUser != nullptr) {
				  // If user is already logged in, show an error message and prevent further login attempts
				  MessageBox::Show("You are already logged in. Please log out first to log in again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				  return;
			  }

			  // Determine role based on radio button selection
			  if (isTeacher->Checked) {
				  role = "Teacher";
			  }
			  else if (loginstudentradioButton1->Checked) {
				  role = "Student";
			  }
			  else {
				  MessageBox::Show("Please select a role.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				  return;
			  }
			 
			  // Validate user credentials and role
			  if (AuthUser::userExists(username, password, role)) {
				  if (currentUser == nullptr) {
					  currentUser = new AuthUser(username, password);
				  }
				  else {
					  currentUser->IsLoggedIn = true;
				  }
				  currentUser->setRole(role);

				  // Show appropriate dashboard
				  if (role == "Teacher") {
					  tabControl->SelectedTab = tabControl->TabPages[3]; // Teacher Dashboard
					  ItemsOnTeacherDashBoard(true);
					  label2->Visible = false;
					  label1->Text = "Teacher's Can't Visit Student Portal";
					  label1->Visible = true;
					  comboBox1->Visible = true;
					
				  }
				  else {
					  tabControl->SelectedTab = tabControl->TabPages[2]; // Student Dashboard
					  ItemsOnStudentDashBoard(true);
					   //Set username to name label
					    studDisplayNameLabel->Text = gcnew String(currentUser->getUsername().c_str());
					   //Displaying the roll number
					    roll->Text = gcnew String(currentUser->getRoll().c_str());
						label2->Visible = true;
						label2->Text = "Students Can't Visit Teachers Portal";
						label1->Visible = false;
						comboBox1->Visible = false;


				  }

				  MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			  }
			  else {
				  MessageBox::Show("Invalid username, password, or role.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			  }

			  // Clear input fields
			  loginTextboxUsername->Clear();
			  loginTextboxPassword->Clear();

			  array<String^>^ marks = { "71" , "81","88","90","99","100" };
			  DataManager^ dm = gcnew DataManager(marks);

			  dm->DisplayCourses(tableLayoutPanel1);
			  gpa->Text = dm->roundToTwoDecimalPlaces(dm->CalculateGPA(marks)).ToString();

			 
			  


		  }
				 // In the signup button click handler
private: System::Void signupButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// Convert System::String^ to std::string
	IntPtr usernamePtr = Marshal::StringToHGlobalAnsi(signupTextboxUsername->Text);
	IntPtr passwordPtr = Marshal::StringToHGlobalAnsi(signupTextboxPassword->Text);
	IntPtr confirmPasswordPtr = Marshal::StringToHGlobalAnsi(signupTextboxConfirmPassword->Text);

	std::string username = static_cast<char*>(usernamePtr.ToPointer());
	std::string password = static_cast<char*>(passwordPtr.ToPointer());
	std::string confirmPassword = static_cast<char*>(confirmPasswordPtr.ToPointer());

	// Free memory allocated by Marshal::StringToHGlobalAnsi
	Marshal::FreeHGlobal(usernamePtr);
	Marshal::FreeHGlobal(passwordPtr);
	Marshal::FreeHGlobal(confirmPasswordPtr);

	// Check if passwords match
	if (password != confirmPassword) {
		MessageBox::Show("Passwords do not match.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check if username or password fields are empty
	if (username.empty() || password.empty()) {
		MessageBox::Show("Please fill in both the username and password fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Check if the user already exists
	if (User::userExists(username, password, "Student")) {
		MessageBox::Show("User already exists.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Create a new User object and set the username, password, and role
	User newUser(username, password, "Student");

	// Save the new user to the file
	newUser.saveToFile();

	MessageBox::Show("Sign-up successful! Please log in now.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Redirect to the login tab
	tabControl->SelectedTab = tabControl->TabPages[0];
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
		roll->Visible = a;
		rolllabel->Visible = a;
	}
	
	void ItemsOnTeacherDashBoard(bool a) {
		assignMarksButton->Visible = a;
		dataGridView1->Visible = a;
		TeacherLogoutBtn->Visible = a;
	}
	void CheckUserType() {
		if (currentUser->getRole() == "Teacher") {
			tabControl->SelectedTab = tabControl->TabPages[3];
			label2->Visible = false;

		}
		else {
			tabControl->SelectedTab = tabControl->TabPages[2];
			label1->Visible = false;
			label2->Text = "You are not a Teacher";
			//Enable all things in student dashboard
			ItemsOnStudentDashBoard(true);
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
		//disable all items on student and teacher dashboard ON FORM LOAD
		ItemsOnStudentDashBoard(false);
		ItemsOnTeacherDashBoard(false);
		pictureBox1->Image = System::Drawing::Image::FromFile("C:\\Users\\Jawwad\\Downloads\\login_page_image.jpg");

		

	}

	private: System::Void logoutBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		//assing null to poitner
		delete currentUser;
		currentUser = NULL;
		tabControl->SelectedTab = tabControl->TabPages[0];
		tableLayoutPanel1->Controls->Clear();
		ItemsOnStudentDashBoard(false);
		ItemsOnTeacherDashBoard(false);
		label1->Visible = true;
		label2->Visible = true;
		label1->Text = "Log In Again To Visit Dashboards";
		label2->Text = "Log In Again To Visit Dashboards";

	}
	

				
		   private: System::Void saveMarksBtn_Click(System::Object^ sender, System::EventArgs^ e) {
				   String^ subjectName = comboBox1->Text;
				   String^ fileName = "marks.csv"; // The path to your CSV file

				   if (!File::Exists(fileName)) {
					   MessageBox::Show("File not found: " + fileName, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					   return;
				   }

				   try {
					   StreamReader^ reader = gcnew StreamReader(fileName);
					   String^ headerLine = reader->ReadLine(); // Read the header line
					   if (headerLine == nullptr) {
						   MessageBox::Show("The file is empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   return;
					   }

					   // Split the header line into columns
					   array<String^>^ subjects = headerLine->Split(',');

					   // Check if the subject exists in the header, if not return
					   int subjectIndex = Array::IndexOf(subjects, subjectName);
					   if (subjectIndex == -1) {
						   MessageBox::Show("Subject not found in the CSV file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   reader->Close();
						   return;
					   }

					   // Prepare the DataGridView
					   dataGridView1->Columns->Clear(); // Clear any previous columns
					   dataGridView1->Columns->Add("StudentName", "Student Name"); // Always add student name column
					   dataGridView1->Columns->Add(subjectName, subjectName); // Add the relevant subject column

					   // Read rows and add them to the DataGridView
					   String^ line;
					   while ((line = reader->ReadLine()) != nullptr) {
						   array<String^>^ rowArray = line->Split(',');

						   // Ensure that the row has enough columns
						   if (rowArray->Length > subjectIndex) {
							   dataGridView1->Rows->Add(rowArray[0], rowArray[subjectIndex]); // Add student name and mark for the subject
						   }
						   else {
							  // MessageBox::Show("Row has missing columns: " + line, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						   }
					   }

					   reader->Close();
				   }
				   catch (Exception^ ex) {
					   MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   }
			}



			private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			}




private: System::Void loginTab_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void loginTextboxPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void teacherSaveMarksBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ subjectName = comboBox1->Text;  // Selected subject from ComboBox
	String^ fileName = "marks.csv";        // Path to the CSV file

	if (String::IsNullOrEmpty(subjectName)) {
		MessageBox::Show("Please select a subject before saving.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		// Read the CSV file content
		StreamReader^ reader = gcnew StreamReader(fileName);
		List<String^>^ lines = gcnew List<String^>();

		// Read the header row
		String^ headerLine = reader->ReadLine();
		if (String::IsNullOrEmpty(headerLine)) {
			MessageBox::Show("The CSV file is empty or invalid.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			reader->Close();
			return;
		}
		lines->Add(headerLine); // Add header line to the updated content

		// Split header to get column names
		array<String^>^ subjects = headerLine->Split(',');

		// Find the index of the selected subject in the header row
		int subjectIndex = Array::IndexOf(subjects, subjectName);
		if (subjectIndex == -1) {
			MessageBox::Show("Subject not found in the CSV file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			reader->Close();
			return;
		}

		// Process the remaining rows in the CSV
		String^ line;
		int rowIndex = 0; // To keep track of DataGridView rows
		while ((line = reader->ReadLine()) != nullptr) {
			array<String^>^ rowArray = line->Split(',');

			// Check if the row has fewer columns than the header
			if (rowArray->Length < subjects->Length) {
				// Fill the missing columns with default values
				array<String^>^ updatedRowArray = gcnew array<String^>(subjects->Length);
				for (int i = 0; i < updatedRowArray->Length; i++) {
					if (i < rowArray->Length) {
						updatedRowArray[i] = rowArray[i];
					}
					else {
						updatedRowArray[i] = ""; // Default value for missing columns
					}
				}
				rowArray = updatedRowArray;

				// Optional: Warn the user about the inconsistency
				MessageBox::Show("Row has missing columns: " + line, "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			// Check if we still have corresponding rows in the DataGridView
			if (rowIndex < dataGridView1->Rows->Count - 1) { // Skip the "new row" in DataGridView
				// Update the relevant column for the subject with the value from the DataGridView
				if (dataGridView1->Rows[rowIndex]->Cells[subjectIndex]->Value != nullptr) {
					rowArray[subjectIndex] = dataGridView1->Rows[rowIndex]->Cells[subjectIndex]->Value->ToString();
				}
			}

			lines->Add(String::Join(",", rowArray)); // Add the updated row to the list
			rowIndex++;
		}

		reader->Close();

		// Write the updated content back to the file
		StreamWriter^ writer = gcnew StreamWriter(fileName);
		for each (String ^ updatedLine in lines) {
			writer->WriteLine(updatedLine);
		}
		writer->Close();

		MessageBox::Show("Marks saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error saving marks: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}



