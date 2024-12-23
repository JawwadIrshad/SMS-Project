//#include <iostream>
//#include <fstream>
//#include <string>
//#include <msclr/marshal_cppstd.h>
//
//using namespace System;
//using namespace System::Collections::Generic;
//using namespace System::Windows::Forms;
//using namespace System::IO;  // For file handling
//
//public ref class Teacher {
//private:
//    String^ subjectName;  // Teacher's subject name
//    String^ username;     // Teacher's username
//
//public:
//    // Default Constructor
//    Teacher() {}
//
//    // Constructor
//    Teacher(String^ username) {
//        this->username = username;
//        GetSubjectFromCSV(username); // Get the subject assigned to the teacher
//    }
//
//    // Function to get the subject for the teacher from "users.csv"
//    void GetSubjectFromCSV(String^ teacherUsername) {
//        try {
//            StreamReader^ reader = gcnew StreamReader("users.csv");
//            String^ line;
//
//            while ((line = reader->ReadLine()) != nullptr) {
//                array<String^>^ parts = line->Split(',');
//
//                if (parts->Length >= 4) {
//                    String^ csvUsername = parts[0];
//                    String^ role = parts[2];
//                    String^ subject = parts[3];
//
//                    if (csvUsername == teacherUsername && role == "Teacher") {
//                        subjectName = subject;
//                        break;
//                    }
//                }
//            }
//
//            reader->Close();
//
//            // If subject is not found
//            if (String::IsNullOrEmpty(subjectName)) {
//                MessageBox::Show("Subject not found for teacher.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//            }
//        }
//        catch (Exception^ ex) {
//            MessageBox::Show("Error reading the file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//        }
//    }
//
//    // Function to load marks for the specific subject into DataGridView
//    void LoadMarksToDataGridView(DataGridView^ dataGridView) {
//        String^ fileName = "AllMarks.csv";
//
//        if (!File::Exists(fileName)) return;
//
//        StreamReader^ reader = gcnew StreamReader(fileName);
//        String^ headerLine = reader->ReadLine(); // Read the header (subject names)
//        if (headerLine == nullptr) return;
//
//        array<String^>^ subjects = headerLine->Split(',');
//        dataGridView->Columns->Clear();
//
//        // Add only the relevant subject column for this teacher
//        int subjectIndex = Array::IndexOf(subjects, subjectName);
//        if (subjectIndex != -1) {
//            dataGridView->Columns->Add(subjects[subjectIndex], subjectName);
//        }
//
//        // Add rows (student marks)
//        String^ line;
//        while ((line = reader->ReadLine()) != nullptr) {
//            array<String^>^ rowArray = line->Split(',');
//            dataGridView->Rows->Add(rowArray[subjectIndex]); // Add only the marks for the relevant subject
//        }
//
//        reader->Close();
//    }
//
//    // Function to save marks from DataGridView to CSV (only for the specific subject)
//    void SaveMarksFromDataGridView(DataGridView^ dataGridView) {
//        String^ fileName = "AllMarks.csv";
//
//        try {
//            StreamReader^ reader = gcnew StreamReader(fileName);
//            List<String^>^ lines = gcnew List<String^>();
//
//            // Read the existing file content into memory
//            String^ headerLine = reader->ReadLine();
//            lines->Add(headerLine); // Add header line
//
//            array<String^>^ subjects = headerLine->Split(',');
//            int subjectIndex = Array::IndexOf(subjects, subjectName);
//            if (subjectIndex == -1) {
//                MessageBox::Show("Subject not found in the CSV file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//                reader->Close();
//                return;
//            }
//
//            String^ line;
//            while ((line = reader->ReadLine()) != nullptr) {
//                array<String^>^ rowArray = line->Split(',');
//                rowArray[subjectIndex] = dataGridView->Rows[0]->Cells[0]->Value->ToString(); // Update with the new mark
//                lines->Add(String::Join(",", rowArray)); // Save the updated row
//            }
//
//            reader->Close();
//
//            // Now write the updated content back to the file
//            StreamWriter^ writer = gcnew StreamWriter(fileName);
//            for each (String ^ updatedLine in lines) {
//                writer->WriteLine(updatedLine);
//            }
//
//            writer->Close();
//            MessageBox::Show("Marks saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
//        }
//        catch (Exception^ ex) {
//            MessageBox::Show("Error saving marks: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//        }
//    }
//
//    // Handle Deletion of Rows for a specific subject
//    void DeleteSelectedRow(DataGridView^ dataGridView) {
//        if (dataGridView->SelectedRows->Count > 0) {
//            for each (DataGridViewRow ^ row in dataGridView->SelectedRows) {
//                if (!row->IsNewRow) {
//                    dataGridView->Rows->Remove(row);
//                }
//            }
//            MessageBox::Show("Selected row(s) deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
//        }
//        else {
//            MessageBox::Show("No row selected to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//        }
//    }
//
//    // Handle updating marks in DataGridView (Teacher updates directly in DataGridView)
//    void UpdateMarks(DataGridView^ dataGridView) {
//        SaveMarksFromDataGridView(dataGridView); // Save the updated data back to the CSV
//    }
//};
