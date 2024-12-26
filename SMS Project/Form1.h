#pragma once
#include "AuthUser.h"
#include "DataManager.h"
#include "Admin.h"
#include<string>
#include<iostream>
#include <fstream>
#include "StringConvertor.h"
//For Custom Dialouge Boxes
#include "AddTeacherForm.h"
#include "DeleteRecordForm.h"
#include <vcclr.h>


namespace CppCLRWinFormsProject {
	                                                          
	using namespace System;
	using namespace System::Net;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	using namespace SMS_Project; //Custom dialogue box ka hai yeh 

	

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





	private: System::Windows::Forms::Label^ gpaLabel;


	private: System::Windows::Forms::Label^ gpa;





	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label2;













	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label1;

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
	private: System::Windows::Forms::Button^ loadMarksButton;










private: System::Windows::Forms::TabPage^ adminDashBoard;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ adminNameLabel;

private: System::Windows::Forms::TextBox^ adminNameTextBox;


private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ adminPasswordTextBox;

private: System::Windows::Forms::Label^ adminLoginLabel;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ adminHomeBtn;

private: System::Windows::Forms::Button^ adminViewStudentsBtn;

private: System::Windows::Forms::Button^ adminViewTeacherBtn;

private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Panel^ adminViewTeacherPanel;



private: System::Windows::Forms::DataGridView^ adminTeacherGridView;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::Label^ adminLabel;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Panel^ adminVIewStudentPanel;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::DataGridView^ adminStudentGridView;

private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::Button^ addTeacher;
private: System::Windows::Forms::Button^ adminLoginButton;
private: System::Windows::Forms::TabPage^ Annoucements;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Button^ deleteTeacherBtn;
private: System::Windows::Forms::Button^ deleteStudentRecords;

private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ announcementsLabel;
private: System::Windows::Forms::Button^ createAnnouncementsBtn;
private: System::Windows::Forms::TextBox^ announcementTextBox;
private: System::Windows::Forms::RichTextBox^ announcementsRichTextBox;
private: System::Windows::Forms::Button^ announcementsRefreshBtn;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::Panel^ adminStatsPanel;

private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ totalTeacherBtn;

private: System::Windows::Forms::Button^ totalStudentsBtn;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ feedBackUserNameTextBox;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ feedBackEmailTextBox;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ feedBackCommentsTextBox;

private: System::Windows::Forms::Button^ feedBackSubmitBtn;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Button^ button1;



private: System::Windows::Forms::Label^ assignMarksLabel;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ roll;
private: System::Windows::Forms::Label^ rolllabel;
private: System::Windows::Forms::Label^ studDisplayNameLabel;
private: System::Windows::Forms::Label^ namelabel;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Button^ stdToDoListAddTaskBtn;


private: System::Windows::Forms::Label^ label35;



private: System::Windows::Forms::RichTextBox^ RichTextBox1;
private: System::Windows::Forms::FlowLayoutPanel^ todoFlowPanel;
private: System::Windows::Forms::RichTextBox^ richTextBox2;



















































		   System::Windows::Forms::Button^ signupButton;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->headingLabel = (gcnew System::Windows::Forms::Label());
			   this->tabControl = (gcnew System::Windows::Forms::TabControl());
			   this->loginTab = (gcnew System::Windows::Forms::TabPage());
			   this->label17 = (gcnew System::Windows::Forms::Label());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
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
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			   this->signupLabelUsername = (gcnew System::Windows::Forms::Label());
			   this->signupTextboxUsername = (gcnew System::Windows::Forms::TextBox());
			   this->signupLabelPassword = (gcnew System::Windows::Forms::Label());
			   this->signupTextboxPassword = (gcnew System::Windows::Forms::TextBox());
			   this->signupLabelConfirmPassword = (gcnew System::Windows::Forms::Label());
			   this->signupTextboxConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			   this->signupButton = (gcnew System::Windows::Forms::Button());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->panel10 = (gcnew System::Windows::Forms::Panel());
			   this->RichTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			   this->stdToDoListAddTaskBtn = (gcnew System::Windows::Forms::Button());
			   this->label35 = (gcnew System::Windows::Forms::Label());
			   this->panel9 = (gcnew System::Windows::Forms::Panel());
			   this->roll = (gcnew System::Windows::Forms::Label());
			   this->rolllabel = (gcnew System::Windows::Forms::Label());
			   this->studDisplayNameLabel = (gcnew System::Windows::Forms::Label());
			   this->namelabel = (gcnew System::Windows::Forms::Label());
			   this->gpa = (gcnew System::Windows::Forms::Label());
			   this->label29 = (gcnew System::Windows::Forms::Label());
			   this->gpaLabel = (gcnew System::Windows::Forms::Label());
			   this->panel8 = (gcnew System::Windows::Forms::Panel());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->label28 = (gcnew System::Windows::Forms::Label());
			   this->panel7 = (gcnew System::Windows::Forms::Panel());
			   this->label27 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->panel6 = (gcnew System::Windows::Forms::Panel());
			   this->label26 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->assignMarksLabel = (gcnew System::Windows::Forms::Label());
			   this->teacherSaveMarksBtn = (gcnew System::Windows::Forms::Button());
			   this->loadMarksButton = (gcnew System::Windows::Forms::Button());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->adminDashBoard = (gcnew System::Windows::Forms::TabPage());
			   this->panel4 = (gcnew System::Windows::Forms::Panel());
			   this->adminStatsPanel = (gcnew System::Windows::Forms::Panel());
			   this->label21 = (gcnew System::Windows::Forms::Label());
			   this->label20 = (gcnew System::Windows::Forms::Label());
			   this->label19 = (gcnew System::Windows::Forms::Label());
			   this->label18 = (gcnew System::Windows::Forms::Label());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->totalTeacherBtn = (gcnew System::Windows::Forms::Button());
			   this->totalStudentsBtn = (gcnew System::Windows::Forms::Button());
			   this->panel5 = (gcnew System::Windows::Forms::Panel());
			   this->announcementTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->createAnnouncementsBtn = (gcnew System::Windows::Forms::Button());
			   this->announcementsLabel = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->adminVIewStudentPanel = (gcnew System::Windows::Forms::Panel());
			   this->deleteStudentRecords = (gcnew System::Windows::Forms::Button());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->adminStudentGridView = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->adminViewTeacherPanel = (gcnew System::Windows::Forms::Panel());
			   this->deleteTeacherBtn = (gcnew System::Windows::Forms::Button());
			   this->addTeacher = (gcnew System::Windows::Forms::Button());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->adminTeacherGridView = (gcnew System::Windows::Forms::DataGridView());
			   this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->panel3 = (gcnew System::Windows::Forms::Panel());
			   this->adminLabel = (gcnew System::Windows::Forms::Label());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->adminHomeBtn = (gcnew System::Windows::Forms::Button());
			   this->adminViewStudentsBtn = (gcnew System::Windows::Forms::Button());
			   this->adminViewTeacherBtn = (gcnew System::Windows::Forms::Button());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->adminLoginButton = (gcnew System::Windows::Forms::Button());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->adminNameLabel = (gcnew System::Windows::Forms::Label());
			   this->adminNameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->adminPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->adminLoginLabel = (gcnew System::Windows::Forms::Label());
			   this->Annoucements = (gcnew System::Windows::Forms::TabPage());
			   this->announcementsRefreshBtn = (gcnew System::Windows::Forms::Button());
			   this->announcementsRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			   this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			   this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			   this->label22 = (gcnew System::Windows::Forms::Label());
			   this->label23 = (gcnew System::Windows::Forms::Label());
			   this->feedBackUserNameTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->label24 = (gcnew System::Windows::Forms::Label());
			   this->feedBackEmailTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->label25 = (gcnew System::Windows::Forms::Label());
			   this->feedBackCommentsTextBox = (gcnew System::Windows::Forms::TextBox());
			   this->feedBackSubmitBtn = (gcnew System::Windows::Forms::Button());
			   this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			   this->todoFlowPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->tabControl->SuspendLayout();
			   this->loginTab->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->signupTab->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->tabPage1->SuspendLayout();
			   this->panel10->SuspendLayout();
			   this->panel9->SuspendLayout();
			   this->panel8->SuspendLayout();
			   this->panel7->SuspendLayout();
			   this->tabPage2->SuspendLayout();
			   this->panel6->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->adminDashBoard->SuspendLayout();
			   this->panel4->SuspendLayout();
			   this->adminStatsPanel->SuspendLayout();
			   this->panel5->SuspendLayout();
			   this->adminVIewStudentPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminStudentGridView))->BeginInit();
			   this->adminViewTeacherPanel->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminTeacherGridView))->BeginInit();
			   this->panel3->SuspendLayout();
			   this->panel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->Annoucements->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			   this->tabPage3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			   this->tabControl->Controls->Add(this->adminDashBoard);
			   this->tabControl->Controls->Add(this->Annoucements);
			   this->tabControl->Controls->Add(this->tabPage3);
			   this->tabControl->Location = System::Drawing::Point(2, 51);
			   this->tabControl->Name = L"tabControl";
			   this->tabControl->SelectedIndex = 0;
			   this->tabControl->Size = System::Drawing::Size(902, 563);
			   this->tabControl->TabIndex = 1;
			   // 
			   // loginTab
			   // 
			   this->loginTab->BackColor = System::Drawing::Color::Transparent;
			   this->loginTab->Controls->Add(this->label17);
			   this->loginTab->Controls->Add(this->label4);
			   this->loginTab->Controls->Add(this->label10);
			   this->loginTab->Controls->Add(this->comboBox1);
			   this->loginTab->Controls->Add(this->pictureBox1);
			   this->loginTab->Controls->Add(this->label5);
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
			   // 
			   // label17
			   // 
			   this->label17->AutoSize = true;
			   this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label17->Location = System::Drawing::Point(47, 238);
			   this->label17->Name = L"label17";
			   this->label17->Size = System::Drawing::Size(62, 19);
			   this->label17->TabIndex = 26;
			   this->label17->Text = L"Subject:";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Bold));
			   this->label4->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->label4->Location = System::Drawing::Point(752, 495);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(125, 23);
			   this->label4->TabIndex = 24;
			   this->label4->Text = L"HJ Developers";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->BackColor = System::Drawing::Color::Transparent;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F, System::Drawing::FontStyle::Bold));
			   this->label10->ForeColor = System::Drawing::Color::Black;
			   this->label10->Location = System::Drawing::Point(597, 498);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(164, 17);
			   this->label10->TabIndex = 25;
			   this->label10->Text = L"created and managed by ";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->comboBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			   this->comboBox1->FormattingEnabled = true;
			   this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"OC", L"OOP", L"OOP-LAB", L"Discrete", L"Calculus" });
			   this->comboBox1->Location = System::Drawing::Point(49, 260);
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->Size = System::Drawing::Size(248, 28);
			   this->comboBox1->TabIndex = 23;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(374, 122);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Padding = System::Windows::Forms::Padding(100);
			   this->pictureBox1->Size = System::Drawing::Size(409, 264);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox1->TabIndex = 22;
			   this->pictureBox1->TabStop = false;
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label5->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->label5->Location = System::Drawing::Point(45, 33);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(105, 19);
			   this->label5->TabIndex = 21;
			   this->label5->Text = L"Welcome back!";
			   // 
			   // loginstudentradioButton1
			   // 
			   this->loginstudentradioButton1->AutoSize = true;
			   this->loginstudentradioButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->loginstudentradioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold));
			   this->loginstudentradioButton1->Location = System::Drawing::Point(204, 308);
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
			   this->isTeacher->Location = System::Drawing::Point(54, 308);
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
			   this->linkLabel2->LinkColor = System::Drawing::SystemColors::MenuHighlight;
			   this->linkLabel2->Location = System::Drawing::Point(103, 408);
			   this->linkLabel2->Name = L"linkLabel2";
			   this->linkLabel2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			   this->linkLabel2->Size = System::Drawing::Size(108, 13);
			   this->linkLabel2->TabIndex = 17;
			   this->linkLabel2->TabStop = true;
			   this->linkLabel2->Text = L"Don\'t have Account";
			   this->linkLabel2->VisitedLinkColor = System::Drawing::SystemColors::MenuHighlight;
			   // 
			   // loginLabelUsername
			   // 
			   this->loginLabelUsername->AutoSize = true;
			   this->loginLabelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->loginLabelUsername->Location = System::Drawing::Point(46, 108);
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
			   this->loginTextboxUsername->Location = System::Drawing::Point(49, 131);
			   this->loginTextboxUsername->MinimumSize = System::Drawing::Size(0, 30);
			   this->loginTextboxUsername->Name = L"loginTextboxUsername";
			   this->loginTextboxUsername->Size = System::Drawing::Size(248, 28);
			   this->loginTextboxUsername->TabIndex = 13;
			   // 
			   // loginLabelPassword
			   // 
			   this->loginLabelPassword->AutoSize = true;
			   this->loginLabelPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->loginLabelPassword->Location = System::Drawing::Point(45, 171);
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
			   this->loginTextboxPassword->Location = System::Drawing::Point(49, 195);
			   this->loginTextboxPassword->MinimumSize = System::Drawing::Size(0, 30);
			   this->loginTextboxPassword->Name = L"loginTextboxPassword";
			   this->loginTextboxPassword->PasswordChar = '•';
			   this->loginTextboxPassword->Size = System::Drawing::Size(248, 28);
			   this->loginTextboxPassword->TabIndex = 15;
			   this->loginTextboxPassword->UseSystemPasswordChar = true;
			   // 
			   // loginButton
			   // 
			   this->loginButton->BackColor = System::Drawing::Color::Transparent;
			   this->loginButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->loginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Bold));
			   this->loginButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			   this->loginButton->Location = System::Drawing::Point(82, 344);
			   this->loginButton->Name = L"loginButton";
			   this->loginButton->Padding = System::Windows::Forms::Padding(10);
			   this->loginButton->Size = System::Drawing::Size(164, 52);
			   this->loginButton->TabIndex = 16;
			   this->loginButton->Text = L"Login";
			   this->loginButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			   this->loginButton->UseVisualStyleBackColor = false;
			   this->loginButton->Click += gcnew System::EventHandler(this, &Form1::loginButton_Click);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(41, 50);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(123, 47);
			   this->label3->TabIndex = 11;
			   this->label3->Text = L"Log In";
			   // 
			   // signupTab
			   // 
			   this->signupTab->Controls->Add(this->label11);
			   this->signupTab->Controls->Add(this->label12);
			   this->signupTab->Controls->Add(this->pictureBox3);
			   this->signupTab->Controls->Add(this->label8);
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
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Bold));
			   this->label11->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->label11->Location = System::Drawing::Point(753, 497);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(125, 23);
			   this->label11->TabIndex = 26;
			   this->label11->Text = L"HJ Developers";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->BackColor = System::Drawing::Color::Transparent;
			   this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F, System::Drawing::FontStyle::Bold));
			   this->label12->ForeColor = System::Drawing::Color::Black;
			   this->label12->Location = System::Drawing::Point(598, 500);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(164, 17);
			   this->label12->TabIndex = 27;
			   this->label12->Text = L"created and managed by ";
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Location = System::Drawing::Point(352, 46);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Padding = System::Windows::Forms::Padding(100);
			   this->pictureBox3->Size = System::Drawing::Size(516, 389);
			   this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox3->TabIndex = 23;
			   this->pictureBox3->TabStop = false;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->Location = System::Drawing::Point(45, 36);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(150, 47);
			   this->label8->TabIndex = 12;
			   this->label8->Text = L"Sign Up";
			   // 
			   // linkLabel1
			   // 
			   this->linkLabel1->AutoSize = true;
			   this->linkLabel1->Location = System::Drawing::Point(106, 362);
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
			   this->signupLabelUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->signupLabelUsername->Location = System::Drawing::Point(49, 99);
			   this->signupLabelUsername->Name = L"signupLabelUsername";
			   this->signupLabelUsername->Size = System::Drawing::Size(80, 19);
			   this->signupLabelUsername->TabIndex = 0;
			   this->signupLabelUsername->Text = L"Username:";
			   // 
			   // signupTextboxUsername
			   // 
			   this->signupTextboxUsername->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->signupTextboxUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->signupTextboxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->signupTextboxUsername->Location = System::Drawing::Point(52, 123);
			   this->signupTextboxUsername->Name = L"signupTextboxUsername";
			   this->signupTextboxUsername->Size = System::Drawing::Size(226, 28);
			   this->signupTextboxUsername->TabIndex = 1;
			   // 
			   // signupLabelPassword
			   // 
			   this->signupLabelPassword->AutoSize = true;
			   this->signupLabelPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->signupLabelPassword->Location = System::Drawing::Point(49, 163);
			   this->signupLabelPassword->Name = L"signupLabelPassword";
			   this->signupLabelPassword->Size = System::Drawing::Size(77, 19);
			   this->signupLabelPassword->TabIndex = 2;
			   this->signupLabelPassword->Text = L"Password:";
			   // 
			   // signupTextboxPassword
			   // 
			   this->signupTextboxPassword->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->signupTextboxPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->signupTextboxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->signupTextboxPassword->Location = System::Drawing::Point(52, 188);
			   this->signupTextboxPassword->Name = L"signupTextboxPassword";
			   this->signupTextboxPassword->Size = System::Drawing::Size(226, 28);
			   this->signupTextboxPassword->TabIndex = 3;
			   this->signupTextboxPassword->UseSystemPasswordChar = true;
			   // 
			   // signupLabelConfirmPassword
			   // 
			   this->signupLabelConfirmPassword->AutoSize = true;
			   this->signupLabelConfirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->signupLabelConfirmPassword->Location = System::Drawing::Point(49, 232);
			   this->signupLabelConfirmPassword->Name = L"signupLabelConfirmPassword";
			   this->signupLabelConfirmPassword->Size = System::Drawing::Size(135, 19);
			   this->signupLabelConfirmPassword->TabIndex = 4;
			   this->signupLabelConfirmPassword->Text = L"Confirm Password:";
			   // 
			   // signupTextboxConfirmPassword
			   // 
			   this->signupTextboxConfirmPassword->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->signupTextboxConfirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->signupTextboxConfirmPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->signupTextboxConfirmPassword->Location = System::Drawing::Point(52, 257);
			   this->signupTextboxConfirmPassword->Name = L"signupTextboxConfirmPassword";
			   this->signupTextboxConfirmPassword->Size = System::Drawing::Size(226, 28);
			   this->signupTextboxConfirmPassword->TabIndex = 5;
			   // 
			   // signupButton
			   // 
			   this->signupButton->BackColor = System::Drawing::Color::Transparent;
			   this->signupButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->signupButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->signupButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->signupButton->Location = System::Drawing::Point(85, 298);
			   this->signupButton->Name = L"signupButton";
			   this->signupButton->Size = System::Drawing::Size(157, 52);
			   this->signupButton->TabIndex = 6;
			   this->signupButton->Text = L"Sign Up";
			   this->signupButton->UseVisualStyleBackColor = false;
			   this->signupButton->Click += gcnew System::EventHandler(this, &Form1::signupButton_Click);
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->panel10);
			   this->tabPage1->Controls->Add(this->panel9);
			   this->tabPage1->Controls->Add(this->panel8);
			   this->tabPage1->Controls->Add(this->panel7);
			   this->tabPage1->Controls->Add(this->label1);
			   this->tabPage1->Location = System::Drawing::Point(4, 25);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(894, 534);
			   this->tabPage1->TabIndex = 2;
			   this->tabPage1->Text = L"Student Dashboard";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // panel10
			   // 
			   this->panel10->AutoScroll = true;
			   this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel10->Controls->Add(this->todoFlowPanel);
			   this->panel10->Controls->Add(this->richTextBox2);
			   this->panel10->Controls->Add(this->RichTextBox1);
			   this->panel10->Controls->Add(this->stdToDoListAddTaskBtn);
			   this->panel10->Controls->Add(this->label35);
			   this->panel10->Location = System::Drawing::Point(595, 17);
			   this->panel10->Name = L"panel10";
			   this->panel10->Size = System::Drawing::Size(291, 292);
			   this->panel10->TabIndex = 38;
			   // 
			   // RichTextBox1
			   // 
			   this->RichTextBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->RichTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->RichTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			   this->RichTextBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->RichTextBox1->Location = System::Drawing::Point(23, 70);
			   this->RichTextBox1->MaxLength = 100;
			   this->RichTextBox1->Name = L"RichTextBox1";
			   this->RichTextBox1->Size = System::Drawing::Size(252, 37);
			   this->RichTextBox1->TabIndex = 22;
			   this->RichTextBox1->Text = L"";
			   // 
			   // stdToDoListAddTaskBtn
			   // 
			   this->stdToDoListAddTaskBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->stdToDoListAddTaskBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->stdToDoListAddTaskBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->stdToDoListAddTaskBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->stdToDoListAddTaskBtn->Location = System::Drawing::Point(22, 247);
			   this->stdToDoListAddTaskBtn->Name = L"stdToDoListAddTaskBtn";
			   this->stdToDoListAddTaskBtn->Size = System::Drawing::Size(84, 31);
			   this->stdToDoListAddTaskBtn->TabIndex = 17;
			   this->stdToDoListAddTaskBtn->Text = L"Add Task";
			   this->stdToDoListAddTaskBtn->UseVisualStyleBackColor = false;
			   this->stdToDoListAddTaskBtn->Click += gcnew System::EventHandler(this, &Form1::stdToDoListAddTaskBtn_Click);
			   // 
			   // label35
			   // 
			   this->label35->AutoSize = true;
			   this->label35->BackColor = System::Drawing::Color::Transparent;
			   this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label35->Location = System::Drawing::Point(17, 26);
			   this->label35->Name = L"label35";
			   this->label35->Size = System::Drawing::Size(110, 30);
			   this->label35->TabIndex = 13;
			   this->label35->Text = L"To Do List";
			   // 
			   // panel9
			   // 
			   this->panel9->AutoScroll = true;
			   this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel9->Controls->Add(this->roll);
			   this->panel9->Controls->Add(this->rolllabel);
			   this->panel9->Controls->Add(this->studDisplayNameLabel);
			   this->panel9->Controls->Add(this->namelabel);
			   this->panel9->Controls->Add(this->gpa);
			   this->panel9->Controls->Add(this->label29);
			   this->panel9->Controls->Add(this->gpaLabel);
			   this->panel9->Location = System::Drawing::Point(181, 17);
			   this->panel9->Name = L"panel9";
			   this->panel9->Size = System::Drawing::Size(402, 234);
			   this->panel9->TabIndex = 37;
			   // 
			   // roll
			   // 
			   this->roll->AutoSize = true;
			   this->roll->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->roll->Location = System::Drawing::Point(253, 92);
			   this->roll->Name = L"roll";
			   this->roll->Size = System::Drawing::Size(33, 19);
			   this->roll->TabIndex = 17;
			   this->roll->Text = L"----";
			   // 
			   // rolllabel
			   // 
			   this->rolllabel->AutoSize = true;
			   this->rolllabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			   this->rolllabel->ForeColor = System::Drawing::SystemColors::MenuText;
			   this->rolllabel->Location = System::Drawing::Point(249, 75);
			   this->rolllabel->Name = L"rolllabel";
			   this->rolllabel->Size = System::Drawing::Size(36, 19);
			   this->rolllabel->TabIndex = 16;
			   this->rolllabel->Text = L"Roll";
			   // 
			   // studDisplayNameLabel
			   // 
			   this->studDisplayNameLabel->AutoSize = true;
			   this->studDisplayNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->studDisplayNameLabel->Location = System::Drawing::Point(29, 100);
			   this->studDisplayNameLabel->Name = L"studDisplayNameLabel";
			   this->studDisplayNameLabel->Size = System::Drawing::Size(33, 19);
			   this->studDisplayNameLabel->TabIndex = 15;
			   this->studDisplayNameLabel->Text = L"----";
			   // 
			   // namelabel
			   // 
			   this->namelabel->AutoSize = true;
			   this->namelabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10, System::Drawing::FontStyle::Bold));
			   this->namelabel->ForeColor = System::Drawing::SystemColors::MenuText;
			   this->namelabel->Location = System::Drawing::Point(23, 75);
			   this->namelabel->Name = L"namelabel";
			   this->namelabel->Size = System::Drawing::Size(51, 19);
			   this->namelabel->TabIndex = 14;
			   this->namelabel->Text = L"Name";
			   // 
			   // gpa
			   // 
			   this->gpa->AutoSize = true;
			   this->gpa->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Bold));
			   this->gpa->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->gpa->Location = System::Drawing::Point(28, 166);
			   this->gpa->Name = L"gpa";
			   this->gpa->Size = System::Drawing::Size(57, 28);
			   this->gpa->TabIndex = 5;
			   this->gpa->Text = L"0.00";
			   // 
			   // label29
			   // 
			   this->label29->AutoSize = true;
			   this->label29->BackColor = System::Drawing::Color::Transparent;
			   this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label29->Location = System::Drawing::Point(18, 29);
			   this->label29->Name = L"label29";
			   this->label29->Size = System::Drawing::Size(137, 30);
			   this->label29->TabIndex = 13;
			   this->label29->Text = L"Student Info";
			   // 
			   // gpaLabel
			   // 
			   this->gpaLabel->AutoSize = true;
			   this->gpaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold));
			   this->gpaLabel->Location = System::Drawing::Point(24, 144);
			   this->gpaLabel->Name = L"gpaLabel";
			   this->gpaLabel->Size = System::Drawing::Size(50, 22);
			   this->gpaLabel->TabIndex = 4;
			   this->gpaLabel->Text = L"GPA:";
			   // 
			   // panel8
			   // 
			   this->panel8->AutoScroll = true;
			   this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel8->Controls->Add(this->tableLayoutPanel1);
			   this->panel8->Controls->Add(this->label28);
			   this->panel8->Location = System::Drawing::Point(181, 265);
			   this->panel8->Name = L"panel8";
			   this->panel8->Size = System::Drawing::Size(402, 234);
			   this->panel8->TabIndex = 36;
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
			   this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			   this->tableLayoutPanel1->Location = System::Drawing::Point(17, 75);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 5;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.2768F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 18.6808F)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(367, 127);
			   this->tableLayoutPanel1->TabIndex = 14;
			   // 
			   // label28
			   // 
			   this->label28->AutoSize = true;
			   this->label28->BackColor = System::Drawing::Color::Transparent;
			   this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label28->Location = System::Drawing::Point(18, 29);
			   this->label28->Name = L"label28";
			   this->label28->Size = System::Drawing::Size(117, 30);
			   this->label28->TabIndex = 13;
			   this->label28->Text = L"Academics";
			   // 
			   // panel7
			   // 
			   this->panel7->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->panel7->Controls->Add(this->label27);
			   this->panel7->Controls->Add(this->button2);
			   this->panel7->Location = System::Drawing::Point(1, 1);
			   this->panel7->Name = L"panel7";
			   this->panel7->Size = System::Drawing::Size(150, 530);
			   this->panel7->TabIndex = 35;
			   // 
			   // label27
			   // 
			   this->label27->AutoSize = true;
			   this->label27->BackColor = System::Drawing::Color::Transparent;
			   this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label27->ForeColor = System::Drawing::Color::Cornsilk;
			   this->label27->Location = System::Drawing::Point(29, 16);
			   this->label27->Name = L"label27";
			   this->label27->Size = System::Drawing::Size(90, 30);
			   this->label27->TabIndex = 5;
			   this->label27->Text = L"Student";
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button2->Location = System::Drawing::Point(18, 460);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(104, 38);
			   this->button2->TabIndex = 4;
			   this->button2->Text = L"LogOut";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &Form1::logoutBtn_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::Red;
			   this->label1->Location = System::Drawing::Point(412, 194);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(159, 19);
			   this->label1->TabIndex = 12;
			   this->label1->Text = L"Log In Or Sign Up First";
			   // 
			   // tabPage2
			   // 
			   this->tabPage2->Controls->Add(this->panel6);
			   this->tabPage2->Controls->Add(this->label2);
			   this->tabPage2->Controls->Add(this->panel1);
			   this->tabPage2->Location = System::Drawing::Point(4, 25);
			   this->tabPage2->Name = L"tabPage2";
			   this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage2->Size = System::Drawing::Size(894, 534);
			   this->tabPage2->TabIndex = 3;
			   this->tabPage2->Text = L"Teacher Dashboard";
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // panel6
			   // 
			   this->panel6->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->panel6->Controls->Add(this->label26);
			   this->panel6->Controls->Add(this->button1);
			   this->panel6->Location = System::Drawing::Point(1, 0);
			   this->panel6->Name = L"panel6";
			   this->panel6->Size = System::Drawing::Size(150, 530);
			   this->panel6->TabIndex = 34;
			   // 
			   // label26
			   // 
			   this->label26->AutoSize = true;
			   this->label26->BackColor = System::Drawing::Color::Transparent;
			   this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label26->ForeColor = System::Drawing::Color::Cornsilk;
			   this->label26->Location = System::Drawing::Point(29, 16);
			   this->label26->Name = L"label26";
			   this->label26->Size = System::Drawing::Size(87, 30);
			   this->label26->TabIndex = 5;
			   this->label26->Text = L"Teacher";
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button1->Location = System::Drawing::Point(18, 460);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(104, 38);
			   this->button1->TabIndex = 4;
			   this->button1->Text = L"LogOut";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &Form1::logoutBtn_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::Red;
			   this->label2->Location = System::Drawing::Point(368, 249);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(159, 19);
			   this->label2->TabIndex = 3;
			   this->label2->Text = L"Log In Or Sign Up First";
			   // 
			   // panel1
			   // 
			   this->panel1->AutoScroll = true;
			   this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel1->Controls->Add(this->assignMarksLabel);
			   this->panel1->Controls->Add(this->teacherSaveMarksBtn);
			   this->panel1->Controls->Add(this->loadMarksButton);
			   this->panel1->Controls->Add(this->dataGridView1);
			   this->panel1->Location = System::Drawing::Point(177, 69);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(366, 224);
			   this->panel1->TabIndex = 5;
			   // 
			   // assignMarksLabel
			   // 
			   this->assignMarksLabel->AutoSize = true;
			   this->assignMarksLabel->BackColor = System::Drawing::Color::Transparent;
			   this->assignMarksLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->assignMarksLabel->Location = System::Drawing::Point(14, 17);
			   this->assignMarksLabel->Name = L"assignMarksLabel";
			   this->assignMarksLabel->Size = System::Drawing::Size(144, 30);
			   this->assignMarksLabel->TabIndex = 12;
			   this->assignMarksLabel->Text = L"Assign Marks";
			   // 
			   // teacherSaveMarksBtn
			   // 
			   this->teacherSaveMarksBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->teacherSaveMarksBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->teacherSaveMarksBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F, System::Drawing::FontStyle::Bold));
			   this->teacherSaveMarksBtn->ForeColor = System::Drawing::SystemColors::MenuBar;
			   this->teacherSaveMarksBtn->Location = System::Drawing::Point(284, 16);
			   this->teacherSaveMarksBtn->Name = L"teacherSaveMarksBtn";
			   this->teacherSaveMarksBtn->Size = System::Drawing::Size(62, 30);
			   this->teacherSaveMarksBtn->TabIndex = 9;
			   this->teacherSaveMarksBtn->Text = L"Save";
			   this->teacherSaveMarksBtn->UseVisualStyleBackColor = false;
			   this->teacherSaveMarksBtn->Click += gcnew System::EventHandler(this, &Form1::teacherSaveMarksBtn_Click);
			   // 
			   // loadMarksButton
			   // 
			   this->loadMarksButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->loadMarksButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->loadMarksButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.25F, System::Drawing::FontStyle::Bold));
			   this->loadMarksButton->ForeColor = System::Drawing::SystemColors::MenuBar;
			   this->loadMarksButton->Location = System::Drawing::Point(212, 17);
			   this->loadMarksButton->Name = L"loadMarksButton";
			   this->loadMarksButton->Size = System::Drawing::Size(61, 30);
			   this->loadMarksButton->TabIndex = 5;
			   this->loadMarksButton->Text = L"Load";
			   this->loadMarksButton->UseVisualStyleBackColor = false;
			   this->loadMarksButton->Click += gcnew System::EventHandler(this, &Form1::teacherLoadMarksBtn_Click);
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->Column1,
					   this->Column2, this->Column3
			   });
			   this->dataGridView1->Location = System::Drawing::Point(18, 64);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->Size = System::Drawing::Size(331, 150);
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
			   // adminDashBoard
			   // 
			   this->adminDashBoard->Controls->Add(this->panel4);
			   this->adminDashBoard->Controls->Add(this->panel3);
			   this->adminDashBoard->Controls->Add(this->panel2);
			   this->adminDashBoard->Location = System::Drawing::Point(4, 25);
			   this->adminDashBoard->Name = L"adminDashBoard";
			   this->adminDashBoard->Padding = System::Windows::Forms::Padding(3);
			   this->adminDashBoard->Size = System::Drawing::Size(894, 534);
			   this->adminDashBoard->TabIndex = 4;
			   this->adminDashBoard->Text = L"Admin Dashboard";
			   this->adminDashBoard->UseVisualStyleBackColor = true;
			   this->adminDashBoard->Click += gcnew System::EventHandler(this, &Form1::adminDashBoard_Click);
			   // 
			   // panel4
			   // 
			   this->panel4->BackColor = System::Drawing::SystemColors::MenuBar;
			   this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel4->Controls->Add(this->adminStatsPanel);
			   this->panel4->Controls->Add(this->panel5);
			   this->panel4->Controls->Add(this->label16);
			   this->panel4->Controls->Add(this->adminVIewStudentPanel);
			   this->panel4->Controls->Add(this->adminViewTeacherPanel);
			   this->panel4->Location = System::Drawing::Point(152, 3);
			   this->panel4->Name = L"panel4";
			   this->panel4->Size = System::Drawing::Size(733, 531);
			   this->panel4->TabIndex = 35;
			   // 
			   // adminStatsPanel
			   // 
			   this->adminStatsPanel->AutoScroll = true;
			   this->adminStatsPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->adminStatsPanel->Controls->Add(this->label21);
			   this->adminStatsPanel->Controls->Add(this->label20);
			   this->adminStatsPanel->Controls->Add(this->label19);
			   this->adminStatsPanel->Controls->Add(this->label18);
			   this->adminStatsPanel->Controls->Add(this->button3);
			   this->adminStatsPanel->Controls->Add(this->totalTeacherBtn);
			   this->adminStatsPanel->Controls->Add(this->totalStudentsBtn);
			   this->adminStatsPanel->Location = System::Drawing::Point(16, 32);
			   this->adminStatsPanel->Name = L"adminStatsPanel";
			   this->adminStatsPanel->Size = System::Drawing::Size(701, 224);
			   this->adminStatsPanel->TabIndex = 11;
			   // 
			   // label21
			   // 
			   this->label21->AutoSize = true;
			   this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label21->Location = System::Drawing::Point(22, 171);
			   this->label21->Name = L"label21";
			   this->label21->Size = System::Drawing::Size(269, 13);
			   this->label21->TabIndex = 17;
			   this->label21->Text = L"Note : Reload Statistics by clicking on Home button";
			   // 
			   // label20
			   // 
			   this->label20->AutoSize = true;
			   this->label20->BackColor = System::Drawing::Color::Transparent;
			   this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F, System::Drawing::FontStyle::Bold));
			   this->label20->ForeColor = System::Drawing::Color::Black;
			   this->label20->Location = System::Drawing::Point(497, 17);
			   this->label20->Name = L"label20";
			   this->label20->Size = System::Drawing::Size(97, 20);
			   this->label20->TabIndex = 16;
			   this->label20->Text = L"Highest GPA";
			   // 
			   // label19
			   // 
			   this->label19->AutoSize = true;
			   this->label19->BackColor = System::Drawing::Color::Transparent;
			   this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F, System::Drawing::FontStyle::Bold));
			   this->label19->ForeColor = System::Drawing::Color::Black;
			   this->label19->Location = System::Drawing::Point(258, 17);
			   this->label19->Name = L"label19";
			   this->label19->Size = System::Drawing::Size(109, 20);
			   this->label19->TabIndex = 15;
			   this->label19->Text = L"Total Teachers";
			   // 
			   // label18
			   // 
			   this->label18->AutoSize = true;
			   this->label18->BackColor = System::Drawing::Color::Transparent;
			   this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F, System::Drawing::FontStyle::Bold));
			   this->label18->ForeColor = System::Drawing::Color::Black;
			   this->label18->Location = System::Drawing::Point(15, 17);
			   this->label18->Name = L"label18";
			   this->label18->Size = System::Drawing::Size(110, 20);
			   this->label18->TabIndex = 14;
			   this->label18->Text = L"Total Students";
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.25F, System::Drawing::FontStyle::Bold));
			   this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button3->Location = System::Drawing::Point(501, 40);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(180, 73);
			   this->button3->TabIndex = 13;
			   this->button3->Text = L"4.00";
			   this->button3->UseVisualStyleBackColor = false;
			   // 
			   // totalTeacherBtn
			   // 
			   this->totalTeacherBtn->BackColor = System::Drawing::Color::Green;
			   this->totalTeacherBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->totalTeacherBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.25F, System::Drawing::FontStyle::Bold));
			   this->totalTeacherBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->totalTeacherBtn->Location = System::Drawing::Point(260, 40);
			   this->totalTeacherBtn->Name = L"totalTeacherBtn";
			   this->totalTeacherBtn->Size = System::Drawing::Size(180, 73);
			   this->totalTeacherBtn->TabIndex = 12;
			   this->totalTeacherBtn->Text = L"04";
			   this->totalTeacherBtn->UseVisualStyleBackColor = false;
			   // 
			   // totalStudentsBtn
			   // 
			   this->totalStudentsBtn->BackColor = System::Drawing::Color::DarkRed;
			   this->totalStudentsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->totalStudentsBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.25F, System::Drawing::FontStyle::Bold));
			   this->totalStudentsBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->totalStudentsBtn->Location = System::Drawing::Point(16, 40);
			   this->totalStudentsBtn->Name = L"totalStudentsBtn";
			   this->totalStudentsBtn->Size = System::Drawing::Size(180, 73);
			   this->totalStudentsBtn->TabIndex = 11;
			   this->totalStudentsBtn->Text = L"10";
			   this->totalStudentsBtn->UseVisualStyleBackColor = false;
			   // 
			   // panel5
			   // 
			   this->panel5->AutoScroll = true;
			   this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->panel5->Controls->Add(this->announcementTextBox);
			   this->panel5->Controls->Add(this->createAnnouncementsBtn);
			   this->panel5->Controls->Add(this->announcementsLabel);
			   this->panel5->Location = System::Drawing::Point(16, 278);
			   this->panel5->Name = L"panel5";
			   this->panel5->Size = System::Drawing::Size(701, 201);
			   this->panel5->TabIndex = 10;
			   // 
			   // announcementTextBox
			   // 
			   this->announcementTextBox->Location = System::Drawing::Point(19, 59);
			   this->announcementTextBox->Multiline = true;
			   this->announcementTextBox->Name = L"announcementTextBox";
			   this->announcementTextBox->Size = System::Drawing::Size(662, 87);
			   this->announcementTextBox->TabIndex = 14;
			   // 
			   // createAnnouncementsBtn
			   // 
			   this->createAnnouncementsBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->createAnnouncementsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->createAnnouncementsBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->createAnnouncementsBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->createAnnouncementsBtn->Location = System::Drawing::Point(17, 157);
			   this->createAnnouncementsBtn->Name = L"createAnnouncementsBtn";
			   this->createAnnouncementsBtn->Size = System::Drawing::Size(69, 31);
			   this->createAnnouncementsBtn->TabIndex = 12;
			   this->createAnnouncementsBtn->Text = L"Create Announcements";
			   this->createAnnouncementsBtn->UseVisualStyleBackColor = false;
			   this->createAnnouncementsBtn->Click += gcnew System::EventHandler(this, &Form1::createAnnouncementsBtn_Click);
			   // 
			   // announcementsLabel
			   // 
			   this->announcementsLabel->AutoSize = true;
			   this->announcementsLabel->BackColor = System::Drawing::Color::Transparent;
			   this->announcementsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->announcementsLabel->ForeColor = System::Drawing::Color::Black;
			   this->announcementsLabel->Location = System::Drawing::Point(12, 24);
			   this->announcementsLabel->Name = L"announcementsLabel";
			   this->announcementsLabel->Size = System::Drawing::Size(242, 30);
			   this->announcementsLabel->TabIndex = 6;
			   this->announcementsLabel->Text = L"Create Announcements";
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label16->Location = System::Drawing::Point(21, 504);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(572, 13);
			   this->label16->TabIndex = 9;
			   this->label16->Text = L"Note : After Adding or deleteing records you have to reload the data by clicking "
				   L"on the respective View buttons";
			   // 
			   // adminVIewStudentPanel
			   // 
			   this->adminVIewStudentPanel->AutoScroll = true;
			   this->adminVIewStudentPanel->Controls->Add(this->deleteStudentRecords);
			   this->adminVIewStudentPanel->Controls->Add(this->label14);
			   this->adminVIewStudentPanel->Controls->Add(this->adminStudentGridView);
			   this->adminVIewStudentPanel->Location = System::Drawing::Point(16, 34);
			   this->adminVIewStudentPanel->Name = L"adminVIewStudentPanel";
			   this->adminVIewStudentPanel->Size = System::Drawing::Size(380, 224);
			   this->adminVIewStudentPanel->TabIndex = 8;
			   // 
			   // deleteStudentRecords
			   // 
			   this->deleteStudentRecords->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->deleteStudentRecords->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->deleteStudentRecords->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->deleteStudentRecords->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->deleteStudentRecords->Location = System::Drawing::Point(293, 19);
			   this->deleteStudentRecords->Name = L"deleteStudentRecords";
			   this->deleteStudentRecords->Size = System::Drawing::Size(69, 31);
			   this->deleteStudentRecords->TabIndex = 11;
			   this->deleteStudentRecords->Text = L"Delete";
			   this->deleteStudentRecords->UseVisualStyleBackColor = false;
			   this->deleteStudentRecords->Click += gcnew System::EventHandler(this, &Form1::deleteStudentRecords_Click);
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->BackColor = System::Drawing::Color::Transparent;
			   this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label14->ForeColor = System::Drawing::Color::Black;
			   this->label14->Location = System::Drawing::Point(12, 24);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(132, 30);
			   this->label14->TabIndex = 6;
			   this->label14->Text = L"All Students";
			   // 
			   // adminStudentGridView
			   // 
			   this->adminStudentGridView->BackgroundColor = System::Drawing::Color::MintCream;
			   this->adminStudentGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->adminStudentGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->adminStudentGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn7,
					   this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			   });
			   this->adminStudentGridView->GridColor = System::Drawing::SystemColors::ControlText;
			   this->adminStudentGridView->Location = System::Drawing::Point(8, 68);
			   this->adminStudentGridView->Name = L"adminStudentGridView";
			   this->adminStudentGridView->Size = System::Drawing::Size(360, 150);
			   this->adminStudentGridView->TabIndex = 0;
			   // 
			   // dataGridViewTextBoxColumn7
			   // 
			   this->dataGridViewTextBoxColumn7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			   this->dataGridViewTextBoxColumn7->HeaderText = L"Column1";
			   this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			   // 
			   // dataGridViewTextBoxColumn8
			   // 
			   this->dataGridViewTextBoxColumn8->HeaderText = L"Column2";
			   this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			   // 
			   // dataGridViewTextBoxColumn9
			   // 
			   this->dataGridViewTextBoxColumn9->HeaderText = L"Column3";
			   this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			   // 
			   // adminViewTeacherPanel
			   // 
			   this->adminViewTeacherPanel->AutoScroll = true;
			   this->adminViewTeacherPanel->Controls->Add(this->deleteTeacherBtn);
			   this->adminViewTeacherPanel->Controls->Add(this->addTeacher);
			   this->adminViewTeacherPanel->Controls->Add(this->label13);
			   this->adminViewTeacherPanel->Controls->Add(this->adminTeacherGridView);
			   this->adminViewTeacherPanel->Location = System::Drawing::Point(15, 33);
			   this->adminViewTeacherPanel->Name = L"adminViewTeacherPanel";
			   this->adminViewTeacherPanel->Size = System::Drawing::Size(380, 224);
			   this->adminViewTeacherPanel->TabIndex = 6;
			   // 
			   // deleteTeacherBtn
			   // 
			   this->deleteTeacherBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->deleteTeacherBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->deleteTeacherBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->deleteTeacherBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->deleteTeacherBtn->Location = System::Drawing::Point(219, 24);
			   this->deleteTeacherBtn->Name = L"deleteTeacherBtn";
			   this->deleteTeacherBtn->Size = System::Drawing::Size(69, 31);
			   this->deleteTeacherBtn->TabIndex = 10;
			   this->deleteTeacherBtn->Text = L"Delete";
			   this->deleteTeacherBtn->UseVisualStyleBackColor = false;
			   this->deleteTeacherBtn->Click += gcnew System::EventHandler(this, &Form1::deleteTeacherBtn_Click);
			   // 
			   // addTeacher
			   // 
			   this->addTeacher->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->addTeacher->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->addTeacher->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->addTeacher->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->addTeacher->Location = System::Drawing::Point(295, 24);
			   this->addTeacher->Name = L"addTeacher";
			   this->addTeacher->Size = System::Drawing::Size(69, 31);
			   this->addTeacher->TabIndex = 9;
			   this->addTeacher->Text = L"Add";
			   this->addTeacher->UseVisualStyleBackColor = false;
			   this->addTeacher->Click += gcnew System::EventHandler(this, &Form1::addTeacher_Click);
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->BackColor = System::Drawing::Color::Transparent;
			   this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label13->ForeColor = System::Drawing::Color::Black;
			   this->label13->Location = System::Drawing::Point(12, 24);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(129, 30);
			   this->label13->TabIndex = 6;
			   this->label13->Text = L"All Teachers";
			   // 
			   // adminTeacherGridView
			   // 
			   this->adminTeacherGridView->BackgroundColor = System::Drawing::Color::MintCream;
			   this->adminTeacherGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->adminTeacherGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->adminTeacherGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				   this->dataGridViewTextBoxColumn4,
					   this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			   });
			   this->adminTeacherGridView->GridColor = System::Drawing::SystemColors::ControlText;
			   this->adminTeacherGridView->Location = System::Drawing::Point(8, 68);
			   this->adminTeacherGridView->Name = L"adminTeacherGridView";
			   this->adminTeacherGridView->Size = System::Drawing::Size(360, 150);
			   this->adminTeacherGridView->TabIndex = 0;
			   // 
			   // dataGridViewTextBoxColumn4
			   // 
			   this->dataGridViewTextBoxColumn4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			   this->dataGridViewTextBoxColumn4->HeaderText = L"Column1";
			   this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			   // 
			   // dataGridViewTextBoxColumn5
			   // 
			   this->dataGridViewTextBoxColumn5->HeaderText = L"Column2";
			   this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			   // 
			   // dataGridViewTextBoxColumn6
			   // 
			   this->dataGridViewTextBoxColumn6->HeaderText = L"Column3";
			   this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			   // 
			   // panel3
			   // 
			   this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->panel3->Controls->Add(this->adminLabel);
			   this->panel3->Controls->Add(this->button4);
			   this->panel3->Controls->Add(this->adminHomeBtn);
			   this->panel3->Controls->Add(this->adminViewStudentsBtn);
			   this->panel3->Controls->Add(this->adminViewTeacherBtn);
			   this->panel3->Location = System::Drawing::Point(3, 4);
			   this->panel3->Name = L"panel3";
			   this->panel3->Size = System::Drawing::Size(150, 530);
			   this->panel3->TabIndex = 33;
			   // 
			   // adminLabel
			   // 
			   this->adminLabel->AutoSize = true;
			   this->adminLabel->BackColor = System::Drawing::Color::Transparent;
			   this->adminLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->adminLabel->ForeColor = System::Drawing::Color::Cornsilk;
			   this->adminLabel->Location = System::Drawing::Point(29, 16);
			   this->adminLabel->Name = L"adminLabel";
			   this->adminLabel->Size = System::Drawing::Size(79, 30);
			   this->adminLabel->TabIndex = 5;
			   this->adminLabel->Text = L"Admin";
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->button4->Location = System::Drawing::Point(18, 451);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(104, 38);
			   this->button4->TabIndex = 4;
			   this->button4->Text = L"LogOut";
			   this->button4->UseVisualStyleBackColor = false;
			   this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			   // 
			   // adminHomeBtn
			   // 
			   this->adminHomeBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->adminHomeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->adminHomeBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->adminHomeBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->adminHomeBtn->Location = System::Drawing::Point(6, 152);
			   this->adminHomeBtn->Name = L"adminHomeBtn";
			   this->adminHomeBtn->Size = System::Drawing::Size(136, 38);
			   this->adminHomeBtn->TabIndex = 2;
			   this->adminHomeBtn->Text = L"Home";
			   this->adminHomeBtn->UseVisualStyleBackColor = false;
			   this->adminHomeBtn->Click += gcnew System::EventHandler(this, &Form1::adminHomeBtn_Click);
			   // 
			   // adminViewStudentsBtn
			   // 
			   this->adminViewStudentsBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->adminViewStudentsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->adminViewStudentsBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->adminViewStudentsBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->adminViewStudentsBtn->Location = System::Drawing::Point(6, 107);
			   this->adminViewStudentsBtn->Name = L"adminViewStudentsBtn";
			   this->adminViewStudentsBtn->Size = System::Drawing::Size(136, 38);
			   this->adminViewStudentsBtn->TabIndex = 1;
			   this->adminViewStudentsBtn->Text = L"View Students";
			   this->adminViewStudentsBtn->UseVisualStyleBackColor = false;
			   this->adminViewStudentsBtn->Click += gcnew System::EventHandler(this, &Form1::adminViewStudentsBtn_Click);
			   // 
			   // adminViewTeacherBtn
			   // 
			   this->adminViewTeacherBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->adminViewTeacherBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->adminViewTeacherBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->adminViewTeacherBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->adminViewTeacherBtn->Location = System::Drawing::Point(6, 62);
			   this->adminViewTeacherBtn->Name = L"adminViewTeacherBtn";
			   this->adminViewTeacherBtn->Size = System::Drawing::Size(136, 38);
			   this->adminViewTeacherBtn->TabIndex = 0;
			   this->adminViewTeacherBtn->Text = L"View Teachers";
			   this->adminViewTeacherBtn->UseVisualStyleBackColor = false;
			   this->adminViewTeacherBtn->Click += gcnew System::EventHandler(this, &Form1::adminViewTeacherBtn_Click);
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::White;
			   this->panel2->Controls->Add(this->adminLoginButton);
			   this->panel2->Controls->Add(this->pictureBox2);
			   this->panel2->Controls->Add(this->label6);
			   this->panel2->Controls->Add(this->label7);
			   this->panel2->Controls->Add(this->adminNameLabel);
			   this->panel2->Controls->Add(this->adminNameTextBox);
			   this->panel2->Controls->Add(this->label9);
			   this->panel2->Controls->Add(this->adminPasswordTextBox);
			   this->panel2->Controls->Add(this->adminLoginLabel);
			   this->panel2->Location = System::Drawing::Point(11, 20);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(875, 506);
			   this->panel2->TabIndex = 0;
			   // 
			   // adminLoginButton
			   // 
			   this->adminLoginButton->BackColor = System::Drawing::Color::Transparent;
			   this->adminLoginButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->adminLoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->adminLoginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->adminLoginButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->adminLoginButton->Location = System::Drawing::Point(61, 326);
			   this->adminLoginButton->Name = L"adminLoginButton";
			   this->adminLoginButton->Size = System::Drawing::Size(157, 52);
			   this->adminLoginButton->TabIndex = 32;
			   this->adminLoginButton->Text = L"Log In";
			   this->adminLoginButton->UseVisualStyleBackColor = false;
			   this->adminLoginButton->Click += gcnew System::EventHandler(this, &Form1::adminLoginButton_Click);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Location = System::Drawing::Point(429, 123);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Padding = System::Windows::Forms::Padding(100);
			   this->pictureBox2->Size = System::Drawing::Size(382, 264);
			   this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox2->TabIndex = 31;
			   this->pictureBox2->TabStop = false;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label6->ForeColor = System::Drawing::SystemColors::InfoText;
			   this->label6->Location = System::Drawing::Point(56, 66);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(105, 19);
			   this->label6->TabIndex = 30;
			   this->label6->Text = L"Welcome back!";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.25F, System::Drawing::FontStyle::Bold));
			   this->label7->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->label7->Location = System::Drawing::Point(54, 41);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(125, 23);
			   this->label7->TabIndex = 29;
			   this->label7->Text = L"HJ Developers";
			   // 
			   // adminNameLabel
			   // 
			   this->adminNameLabel->AutoSize = true;
			   this->adminNameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->adminNameLabel->Location = System::Drawing::Point(57, 172);
			   this->adminNameLabel->Name = L"adminNameLabel";
			   this->adminNameLabel->Size = System::Drawing::Size(101, 19);
			   this->adminNameLabel->TabIndex = 24;
			   this->adminNameLabel->Text = L"Admin Name:";
			   // 
			   // adminNameTextBox
			   // 
			   this->adminNameTextBox->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->adminNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->adminNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->adminNameTextBox->HideSelection = false;
			   this->adminNameTextBox->Location = System::Drawing::Point(60, 203);
			   this->adminNameTextBox->MinimumSize = System::Drawing::Size(0, 30);
			   this->adminNameTextBox->Name = L"adminNameTextBox";
			   this->adminNameTextBox->Size = System::Drawing::Size(248, 28);
			   this->adminNameTextBox->TabIndex = 25;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label9->Location = System::Drawing::Point(56, 245);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(77, 19);
			   this->label9->TabIndex = 26;
			   this->label9->Text = L"Password:";
			   // 
			   // adminPasswordTextBox
			   // 
			   this->adminPasswordTextBox->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->adminPasswordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->adminPasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->adminPasswordTextBox->Location = System::Drawing::Point(60, 277);
			   this->adminPasswordTextBox->MinimumSize = System::Drawing::Size(0, 30);
			   this->adminPasswordTextBox->Name = L"adminPasswordTextBox";
			   this->adminPasswordTextBox->PasswordChar = '•';
			   this->adminPasswordTextBox->Size = System::Drawing::Size(248, 28);
			   this->adminPasswordTextBox->TabIndex = 27;
			   this->adminPasswordTextBox->UseSystemPasswordChar = true;
			   // 
			   // adminLoginLabel
			   // 
			   this->adminLoginLabel->AutoSize = true;
			   this->adminLoginLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->adminLoginLabel->Location = System::Drawing::Point(52, 97);
			   this->adminLoginLabel->Name = L"adminLoginLabel";
			   this->adminLoginLabel->Size = System::Drawing::Size(243, 47);
			   this->adminLoginLabel->TabIndex = 23;
			   this->adminLoginLabel->Text = L"Admin Log In";
			   // 
			   // Annoucements
			   // 
			   this->Annoucements->Controls->Add(this->announcementsRefreshBtn);
			   this->Annoucements->Controls->Add(this->announcementsRichTextBox);
			   this->Annoucements->Controls->Add(this->pictureBox4);
			   this->Annoucements->Controls->Add(this->label15);
			   this->Annoucements->Location = System::Drawing::Point(4, 25);
			   this->Annoucements->Name = L"Annoucements";
			   this->Annoucements->Padding = System::Windows::Forms::Padding(3);
			   this->Annoucements->Size = System::Drawing::Size(894, 534);
			   this->Annoucements->TabIndex = 5;
			   this->Annoucements->Text = L"Annoucements";
			   this->Annoucements->UseVisualStyleBackColor = true;
			   // 
			   // announcementsRefreshBtn
			   // 
			   this->announcementsRefreshBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			   this->announcementsRefreshBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->announcementsRefreshBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->announcementsRefreshBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->announcementsRefreshBtn->Location = System::Drawing::Point(787, 37);
			   this->announcementsRefreshBtn->Name = L"announcementsRefreshBtn";
			   this->announcementsRefreshBtn->Size = System::Drawing::Size(84, 31);
			   this->announcementsRefreshBtn->TabIndex = 15;
			   this->announcementsRefreshBtn->Text = L"Refresh";
			   this->announcementsRefreshBtn->UseVisualStyleBackColor = false;
			   this->announcementsRefreshBtn->Click += gcnew System::EventHandler(this, &Form1::announcementsRefreshBtn_Click);
			   // 
			   // announcementsRichTextBox
			   // 
			   this->announcementsRichTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->announcementsRichTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold));
			   this->announcementsRichTextBox->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->announcementsRichTextBox->Location = System::Drawing::Point(29, 145);
			   this->announcementsRichTextBox->Name = L"announcementsRichTextBox";
			   this->announcementsRichTextBox->ReadOnly = true;
			   this->announcementsRichTextBox->Size = System::Drawing::Size(842, 366);
			   this->announcementsRichTextBox->TabIndex = 14;
			   this->announcementsRichTextBox->Text = L"";
			   // 
			   // pictureBox4
			   // 
			   this->pictureBox4->Location = System::Drawing::Point(303, 6);
			   this->pictureBox4->Name = L"pictureBox4";
			   this->pictureBox4->Size = System::Drawing::Size(127, 110);
			   this->pictureBox4->TabIndex = 13;
			   this->pictureBox4->TabStop = false;
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label15->Location = System::Drawing::Point(21, 37);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(287, 47);
			   this->label15->TabIndex = 12;
			   this->label15->Text = L"Announcements";
			   // 
			   // tabPage3
			   // 
			   this->tabPage3->Controls->Add(this->pictureBox5);
			   this->tabPage3->Controls->Add(this->label22);
			   this->tabPage3->Controls->Add(this->label23);
			   this->tabPage3->Controls->Add(this->feedBackUserNameTextBox);
			   this->tabPage3->Controls->Add(this->label24);
			   this->tabPage3->Controls->Add(this->feedBackEmailTextBox);
			   this->tabPage3->Controls->Add(this->label25);
			   this->tabPage3->Controls->Add(this->feedBackCommentsTextBox);
			   this->tabPage3->Controls->Add(this->feedBackSubmitBtn);
			   this->tabPage3->Location = System::Drawing::Point(4, 25);
			   this->tabPage3->Name = L"tabPage3";
			   this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage3->Size = System::Drawing::Size(894, 534);
			   this->tabPage3->TabIndex = 6;
			   this->tabPage3->Text = L"FeedBack";
			   this->tabPage3->UseVisualStyleBackColor = true;
			   // 
			   // pictureBox5
			   // 
			   this->pictureBox5->Location = System::Drawing::Point(343, 78);
			   this->pictureBox5->Name = L"pictureBox5";
			   this->pictureBox5->Padding = System::Windows::Forms::Padding(100);
			   this->pictureBox5->Size = System::Drawing::Size(516, 389);
			   this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			   this->pictureBox5->TabIndex = 32;
			   this->pictureBox5->TabStop = false;
			   // 
			   // label22
			   // 
			   this->label22->AutoSize = true;
			   this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label22->Location = System::Drawing::Point(36, 68);
			   this->label22->Name = L"label22";
			   this->label22->Size = System::Drawing::Size(235, 47);
			   this->label22->TabIndex = 31;
			   this->label22->Text = L"FeedBack 🐔";
			   // 
			   // label23
			   // 
			   this->label23->AutoSize = true;
			   this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label23->Location = System::Drawing::Point(40, 131);
			   this->label23->Name = L"label23";
			   this->label23->Size = System::Drawing::Size(80, 19);
			   this->label23->TabIndex = 24;
			   this->label23->Text = L"Username:";
			   // 
			   // feedBackUserNameTextBox
			   // 
			   this->feedBackUserNameTextBox->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->feedBackUserNameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->feedBackUserNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->feedBackUserNameTextBox->Location = System::Drawing::Point(43, 155);
			   this->feedBackUserNameTextBox->Name = L"feedBackUserNameTextBox";
			   this->feedBackUserNameTextBox->Size = System::Drawing::Size(226, 28);
			   this->feedBackUserNameTextBox->TabIndex = 25;
			   // 
			   // label24
			   // 
			   this->label24->AutoSize = true;
			   this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label24->Location = System::Drawing::Point(40, 195);
			   this->label24->Name = L"label24";
			   this->label24->Size = System::Drawing::Size(49, 19);
			   this->label24->TabIndex = 26;
			   this->label24->Text = L"Email:";
			   // 
			   // feedBackEmailTextBox
			   // 
			   this->feedBackEmailTextBox->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->feedBackEmailTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->feedBackEmailTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->feedBackEmailTextBox->Location = System::Drawing::Point(43, 220);
			   this->feedBackEmailTextBox->Name = L"feedBackEmailTextBox";
			   this->feedBackEmailTextBox->Size = System::Drawing::Size(226, 28);
			   this->feedBackEmailTextBox->TabIndex = 27;
			   // 
			   // label25
			   // 
			   this->label25->AutoSize = true;
			   this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.25F, System::Drawing::FontStyle::Bold));
			   this->label25->Location = System::Drawing::Point(40, 264);
			   this->label25->Name = L"label25";
			   this->label25->Size = System::Drawing::Size(80, 19);
			   this->label25->TabIndex = 28;
			   this->label25->Text = L"Comments";
			   // 
			   // feedBackCommentsTextBox
			   // 
			   this->feedBackCommentsTextBox->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->feedBackCommentsTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->feedBackCommentsTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			   this->feedBackCommentsTextBox->Location = System::Drawing::Point(43, 289);
			   this->feedBackCommentsTextBox->Multiline = true;
			   this->feedBackCommentsTextBox->Name = L"feedBackCommentsTextBox";
			   this->feedBackCommentsTextBox->Size = System::Drawing::Size(226, 71);
			   this->feedBackCommentsTextBox->TabIndex = 29;
			   // 
			   // feedBackSubmitBtn
			   // 
			   this->feedBackSubmitBtn->BackColor = System::Drawing::Color::Transparent;
			   this->feedBackSubmitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->feedBackSubmitBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->feedBackSubmitBtn->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   this->feedBackSubmitBtn->Location = System::Drawing::Point(76, 383);
			   this->feedBackSubmitBtn->Name = L"feedBackSubmitBtn";
			   this->feedBackSubmitBtn->Size = System::Drawing::Size(157, 52);
			   this->feedBackSubmitBtn->TabIndex = 30;
			   this->feedBackSubmitBtn->Text = L"Submit";
			   this->feedBackSubmitBtn->UseVisualStyleBackColor = false;
			   this->feedBackSubmitBtn->Click += gcnew System::EventHandler(this, &Form1::feedBackSubmitBtn_Click);
			   // 
			   // richTextBox2
			   // 
			   this->richTextBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			   this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			   this->richTextBox2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			   this->richTextBox2->Location = System::Drawing::Point(22, 113);
			   this->richTextBox2->MaxLength = 100;
			   this->richTextBox2->Name = L"richTextBox2";
			   this->richTextBox2->ReadOnly = true;
			   this->richTextBox2->Size = System::Drawing::Size(252, 128);
			   this->richTextBox2->TabIndex = 23;
			   this->richTextBox2->Text = L"";
			   // 
			   // todoFlowPanel
			   // 
			   this->todoFlowPanel->Location = System::Drawing::Point(23, 113);
			   this->todoFlowPanel->Name = L"todoFlowPanel";
			   this->todoFlowPanel->Size = System::Drawing::Size(248, 128);
			   this->todoFlowPanel->TabIndex = 25;
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
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->tabPage1->ResumeLayout(false);
			   this->tabPage1->PerformLayout();
			   this->panel10->ResumeLayout(false);
			   this->panel10->PerformLayout();
			   this->panel9->ResumeLayout(false);
			   this->panel9->PerformLayout();
			   this->panel8->ResumeLayout(false);
			   this->panel8->PerformLayout();
			   this->panel7->ResumeLayout(false);
			   this->panel7->PerformLayout();
			   this->tabPage2->ResumeLayout(false);
			   this->tabPage2->PerformLayout();
			   this->panel6->ResumeLayout(false);
			   this->panel6->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->adminDashBoard->ResumeLayout(false);
			   this->panel4->ResumeLayout(false);
			   this->panel4->PerformLayout();
			   this->adminStatsPanel->ResumeLayout(false);
			   this->adminStatsPanel->PerformLayout();
			   this->panel5->ResumeLayout(false);
			   this->panel5->PerformLayout();
			   this->adminVIewStudentPanel->ResumeLayout(false);
			   this->adminVIewStudentPanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminStudentGridView))->EndInit();
			   this->adminViewTeacherPanel->ResumeLayout(false);
			   this->adminViewTeacherPanel->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adminTeacherGridView))->EndInit();
			   this->panel3->ResumeLayout(false);
			   this->panel3->PerformLayout();
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->Annoucements->ResumeLayout(false);
			   this->Annoucements->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			   this->tabPage3->ResumeLayout(false);
			   this->tabPage3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   //Creating a global user pointer instance or whatever this is 
		   AuthUser* currentUser = nullptr; // Global pointer to store the logged-in user
		 
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Convert GUI input to std::string
		std::string username = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxUsername->Text).ToPointer());
		std::string password = (const char*)(Marshal::StringToHGlobalAnsi(loginTextboxPassword->Text).ToPointer());
		std::string role;
		std::string subject = (const char*)Marshal::StringToHGlobalAnsi(comboBox1->Text).ToPointer();

		// Prevent duplicate login
		if (currentUser != nullptr) {
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

		// Validate ComboBox selection if the user is a Teacher
		if (role == "Teacher" && String::IsNullOrEmpty(comboBox1->Text)) {
			MessageBox::Show("Please select a subject from the dropdown.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validate user credentials and role
		if (AuthUser::userExists(username, password, role)) {
			// For Teacher role, validate subject match
			if (role == "Teacher") {
				std::ifstream inFile("users.csv");
				std::string line;
				bool subjectMatch = false;

				// Check if the teacher's subject matches the selected one in the ComboBox
				while (std::getline(inFile, line)) {
					std::stringstream ss(line);
					std::string savedName, savedPassword, savedRole, savedSubject;
					std::getline(ss, savedName, ',');
					std::getline(ss, savedPassword, ',');
					std::getline(ss, savedRole, ',');
					std::getline(ss, savedSubject, ',');

					if (savedRole == "Teacher" && savedName == username && savedSubject == subject) {
						subjectMatch = true;
						break;
					}
				}

				inFile.close();

				if (!subjectMatch) {
					MessageBox::Show("Incorrect subject selection. Please select the correct subject.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					return;
				}
			}

			// Log in the user
			if (currentUser == nullptr) {
				currentUser = new AuthUser(username, password, role);
			}
			currentUser->setIsLoggedIn(true);

			// Set up the dashboard based on role
			if (role == "Teacher") {
				tabControl->SelectedTab = tabControl->TabPages[3]; // Teacher Dashboard
				ItemsOnTeacherDashBoard(true);
				label2->Visible = false;
				label1->Text = "Teachers Can't Visit Student Portal";
				label1->Visible = true;
				comboBox1->Visible = true;
			}
			else { // Student
				tabControl->SelectedTab = tabControl->TabPages[2]; // Student Dashboard
				ItemsOnStudentDashBoard(true);

				// Set username and roll number
				studDisplayNameLabel->Text = gcnew String(currentUser->getUsername().c_str());
				roll->Text = gcnew String(currentUser->getRoll().c_str());
				label2->Visible = true;
				label2->Text = "Students Can't Visit Teachers Portal";
				label1->Visible = false;
				comboBox1->Text = "";
			}

			MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Invalid username, password, or role.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Clear input fields
		loginTextboxUsername->Clear();
		loginTextboxPassword->Clear();
		if (currentUser != nullptr) {
			DataManager dm(currentUser->getUsername());
			dm.DisplayCourses(tableLayoutPanel1);
			gpa->Text = dm.CalculateGPA().ToString();
		}
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
		gpaLabel->Visible = a;
		gpa->Visible = a;
		panel7->Visible = a;
		panel8->Visible = a;
		panel9->Visible = a;
		panel10->Visible = a;
	}
	//function to disable and enable the things of dashboard
	void ItemsOnTeacherDashBoard(bool a) {
		loadMarksButton->Visible = a;
		dataGridView1->Visible = a;
		teacherSaveMarksBtn->Visible = a;
		assignMarksLabel->Visible = a;
		panel6->Visible = a;
	}
	//funciton to disable things on panel 4(part of admin dashboard)
	void ItemsOnAdminPanel4(bool a) {
		adminViewTeacherPanel->Visible = a;
		adminVIewStudentPanel->Visible = a;
		adminStudentGridView->Visible = a;
		adminStatsPanel->Visible = a;
	}
	//function to disable and enable the Login Panel of admin dashboard
	void DisplayAdminLoginPanelDashBoard(bool a) {
		panel2->Visible = a;
		adminLoginLabel->Visible = a;
		adminNameLabel->Visible = a;


	}
	//Link label2 to goto from login to sign up page
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		tabControl->SelectedTab = tabControl->TabPages[1];
	}
	//Link label1 to goto from sign up to login
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		tabControl->SelectedTab = tabControl->TabPages[0];

	}
	
	//On FOrm load 
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		// Hide all components on the Student Dashboard tab if the user is not logged in
		label1->Visible = true;  // Show the "Login or Signup first" placeholder
		//disable all items on student and teacher dashboard ON FORM LOAD
		ItemsOnStudentDashBoard(false);
		ItemsOnTeacherDashBoard(false);
		
		try {
			//Images For Login Sign Up and Admin 
			////Images Setted From google drive
			pictureBox1->ImageLocation = "https://drive.google.com/uc?export=download&id=1qWkzlOMcFYcmyWNs3n3YmU-aGyHUSOE0"; 
			pictureBox2->ImageLocation = "https://drive.google.com/uc?export=download&id=16zJHjnluQXMDS1X79VyziEqyf2yoIzp1";
			pictureBox3->ImageLocation = "https://drive.google.com/uc?export=download&id=1Ca5e0BT4kQygKvQUQTompl_07u4H2JTg";
			pictureBox4->ImageLocation = "https://drive.google.com/uc?export=download&id=1-JRfrpeOt9Rwn8R5_iGnT6u0mW1RFoSC";
			pictureBox5->ImageLocation = "https://drive.google.com/uc?export=download&id=1Mt4YJhb9YeHwzf0gA4Ybo3qSvXb0P2bC";
			//styling buttons
			SetButtonImageFromURL(loginButton, "https://drive.google.com/uc?export=download&id=19RNP-Giin5FSZcfi3JfBn3UhrUN8ov4f");
			SetButtonImageFromURL(signupButton, "https://drive.google.com/uc?export=download&id=19RNP-Giin5FSZcfi3JfBn3UhrUN8ov4f");
			SetButtonImageFromURL(adminLoginButton, "https://drive.google.com/uc?export=download&id=19RNP-Giin5FSZcfi3JfBn3UhrUN8ov4f");
			SetButtonImageFromURL(feedBackSubmitBtn, "https://drive.google.com/uc?export=download&id=19RNP-Giin5FSZcfi3JfBn3UhrUN8ov4f");
		
		}
		catch (System::IO::FileNotFoundException^ e) {
			MessageBox::Show("File Not Found." + e, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

		//Enable the admin panel 
		Admin::DisplayPannel(panel2, true);
		//ON load hide dashboard
		panel3->Visible = false;
		panel4->Visible = false;


		
		//Disabling the admin Teacher View Panel
		adminViewTeacherPanel->Visible = false;
		ItemsOnAdminPanel4(false);

		//Load Announcements
		LoadAnnouncements();

	
	}
	
	//Logout button for teacher and student dashboards
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

		   void SetButtonImageFromURL(System::Windows::Forms::Button^ button, String^ imageUrl)
		   {
			   try
			   {
				   // Create a WebClient to download the image
				   WebClient^ webClient = gcnew WebClient();
				   array<Byte>^ data = webClient->DownloadData(imageUrl);

				   // Create a MemoryStream from the downloaded data
				   System::IO::MemoryStream^ memoryStream = gcnew System::IO::MemoryStream(data);

				   // Set the downloaded image as the button's background image
				   button->BackgroundImage = Image::FromStream(memoryStream);
				   button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch; // Optional: Adjust layout
			   }
			   catch (Exception^ ex)
			   {
				   MessageBox::Show("Error loading image: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			   }
		   }
	
	//Teacher load Marks Button in the data grid view for marks
	private: System::Void teacherLoadMarksBtn_Click(System::Object^ sender, System::EventArgs^ e) {
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

				// Ensure that the row has at least the student name
				if (rowArray->Length > 0) {
					String^ studentName = rowArray[0];
					String^ marks = "0"; // Default marks value if no marks are provided

					// If the subject column exists in the row, use its value; otherwise, use 0
					if (rowArray->Length > subjectIndex) {
						marks = rowArray[subjectIndex];
					}

					// Add student name and marks (0 if not provided) to the DataGridView
					dataGridView1->Rows->Add(studentName, marks);
				}
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
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

					// Ensure the row has enough columns to match the header
					if (rowArray->Length < subjects->Length) {
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
					}

					// Check if we still have corresponding rows in the DataGridView
					if (rowIndex < dataGridView1->Rows->Count - 1) { // Skip the "new row" in DataGridView
						// Update the relevant column for the subject with the value from the DataGridView
						DataGridViewRow^ gridRow = dataGridView1->Rows[rowIndex];
						if (gridRow->Cells[1]->Value != nullptr) { // Assuming column 1 holds the marks
							rowArray[subjectIndex] = gridRow->Cells[1]->Value->ToString();
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

	private: System::Void adminLoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin admin("hayyan", "123");
		
		if (admin.ValidateAdminLogin(adminNameTextBox, adminPasswordTextBox)) {
			panel3->Visible = true;
			panel4->Visible = true;
			//Disable Login For Admin Login Panel After Login
			DisplayAdminLoginPanelDashBoard(false);
			//Enabel Admin Dashboard
			MessageBox::Show("Admin Logged In", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//clear the input boxes after btn is clicked
			adminNameTextBox->Clear();
			adminPasswordTextBox->Clear();
			
		
		}
		else {
			MessageBox::Show("Invalid Password or Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
private: System::Void adminDashBoard_Click(System::Object^ sender, System::EventArgs^ e) {
}



	//Admin Logout Btn Click
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel3->Visible = false;
		panel4->Visible = false;
		//Enable Login For Admin Login Panel After Login
		DisplayAdminLoginPanelDashBoard(true);
		//Disibale everything on panel 4
		ItemsOnAdminPanel4(false);

	}
	
	//Method From Admin Class by scope resolution operators
	private: System::Void adminViewTeacherBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
		Admin::DisplayTeachersOnGridView(adminTeacherGridView);
		//Enabling the admin Teacher View Panel
		ItemsOnAdminPanel4(false);
		adminTeacherGridView->Visible = true;
		adminViewTeacherPanel->Visible = true;

	}
	//Admin panel4 view teacher button on click
	private: System::Void adminViewStudentsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Admin::DisplayStudentsOnGridView(adminStudentGridView);
		//Enable the student view grid view
		ItemsOnAdminPanel4(false);
		adminStudentGridView->Visible = true;
		adminVIewStudentPanel->Visible = true;
	}
	//Add Teacher from admin panel4
	private: System::Void addTeacher_Click(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Add Teacher");
		AddTeacherForm^ addTeacherForm = gcnew AddTeacherForm();
		addTeacherForm->ShowDialog();

	}
	//Delete Teacher BTn from admin panel4
	private: System::Void deleteTeacherBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteRecordForm^ deleteRecordForm = gcnew DeleteRecordForm("Teacher");
		deleteRecordForm->ShowDialog();
	
	}
	//Delete Student Record BTN from admin panel 4
	private: System::Void deleteStudentRecords_Click(System::Object^ sender, System::EventArgs^ e) {
		DeleteRecordForm^ deleteRecordForm = gcnew DeleteRecordForm("Student");
		deleteRecordForm->ShowDialog();

	}
	private: System::Void createAnnouncementsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get the multiline text from the TextBox
		String^ announcementText = announcementTextBox->Text;

		// Replace newline characters with a placeholder (e.g., space or specific character)
		String^ formattedText = announcementText->Replace("\r\n", " "); // Replace newlines with spaces

		// Check if the formatted text is not null or empty
		if (!String::IsNullOrEmpty(formattedText)) {

			// Open the CSV file for appending
			std::ofstream file("announcements.csv", std::ios::app); // Open in append mode
			if (!file.is_open()) {
				MessageBox::Show("Could not open announcements.csv file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			// Convert the managed string to a standard string for writing to CSV
			std::string textToWrite = ConvertToStdString(formattedText);

			// Write the formatted text into the file, with quotes to handle commas or special characters
			//Created date time object
			DateTime currentDate = DateTime::Now;
			//create a std::string to save the date and time to save it inot file
			std::string date = ConvertToStdString(currentDate.ToString("yyyy-MM-dd"));
			file <<"[" << date << "] : " << textToWrite << std::endl;


			file.close();

			MessageBox::Show("Announcement created successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			announcementTextBox->Clear();
		}
		else {
			MessageBox::Show("Announcement text cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	private: System::Void adminHomeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ItemsOnAdminPanel4(false);
		adminStatsPanel->Visible = true;
		totalStudentsBtn->Text = Admin::CountUsersByRole("Student").ToString();
		totalTeacherBtn->Text = Admin::CountUsersByRole("Teacher").ToString();
	}

	//Helper method to convert string 
	static std::string ConvertToStdString(String^ managedString)
	{
		const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(managedString)).ToPointer();
		std::string convertedString(chars);
		System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr((void*)chars));
		return convertedString;
	}

	// Helper method to convert std::string to String^
	static String^ ConvertToString(const std::string& stdString)
	{
		int length = stdString.length();
		pin_ptr<const wchar_t> wch = PtrToStringChars(gcnew String(stdString.c_str()));
		String^ managedString = gcnew String(wch);
		return managedString;
	}

	private: System::Void LoadAnnouncements()
	{
		// Clear the existing content
		announcementsRichTextBox->Clear();

		// Open the CSV file to read announcements
		std::ifstream file("announcements.csv");
		if (!file.is_open()) {
			MessageBox::Show("Could not open announcements.csv file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		std::string line;
		while (std::getline(file, line)) {
			// Convert the line from std::string to String^
			String^ announcement = ConvertToString(line);

			// Apply custom formatting before adding to RichTextBox
			announcementsRichTextBox->SelectionStart = announcementsRichTextBox->TextLength;
			announcementsRichTextBox->SelectionLength = 0;

			// You can apply different styles like bold, color, etc.
			announcementsRichTextBox->SelectionFont = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Regular);
			announcementsRichTextBox->SelectionColor = System::Drawing::Color::Black;

			// Append the formatted announcement to the RichTextBox
			announcementsRichTextBox->AppendText(announcement + "\r\n\r\n");
		}

		file.close();
	}

	private: System::Void announcementsRefreshBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadAnnouncements();
	}

	//Feed back submit btn Click
	private: System::Void feedBackSubmitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	
		//Save the feed back into a feedback.csv
		DataManager::SaveFeedBacksIntoFile(feedBackUserNameTextBox, feedBackEmailTextBox, feedBackCommentsTextBox);
		
		//Clear Existing data in the feilds
		feedBackUserNameTextBox->Clear();
		feedBackEmailTextBox->Clear();
		feedBackCommentsTextBox->Clear();

	
	}
	private: System::Void stdToDoListAddTaskBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(RichTextBox1->Text)) {
			MessageBox::Show("Please enter a task.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ taskText = RichTextBox1->Text;

		// Create a new panel to hold the task and its button
		Panel^ taskPanel = gcnew Panel();
		taskPanel->Height = 40; // Adjust height as needed
		taskPanel->Dock = DockStyle::None;
		//taskPanel->BackColor = System::Drawing::Color::LightGray; // Optional styling

		// Create a label for the task text
		Label^ taskLabel = gcnew Label();
		taskLabel->Text = taskText;
		taskLabel->AutoSize = true;
		taskLabel->Dock = DockStyle::Left;

		// Create a button to remove the task
		Button^ removeButton = gcnew Button();
		removeButton->Text = "X";
		removeButton->Width = 20; // Adjust width as needed
		removeButton->Height = 10; // Adjust width as needed
		removeButton->Dock = DockStyle::Right;


		removeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		

		// Add click event to remove the task
		removeButton->Click += gcnew EventHandler(this, &Form1::RemoveTaskButton_Click);

		// Add the label and button to the panel
		taskPanel->Controls->Add(taskLabel);
		taskPanel->Controls->Add(removeButton);

		// Add the panel to the FlowLayoutPanel
		todoFlowPanel->Controls->Add(taskPanel);

		// Store a reference to the task panel in the button's Tag property (used for removal)
		removeButton->Tag = taskPanel;

		// Clear the input box
		RichTextBox1->Clear();
	}

		   // Event handler to remove the task
private: System::Void RemoveTaskButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Button^ removeButton = safe_cast<Button^>(sender);
	Panel^ taskPanel = safe_cast<Panel^>(removeButton->Tag);

	// Remove the task panel from the FlowLayoutPanel
	todoFlowPanel->Controls->Remove(taskPanel);
}

};
}



