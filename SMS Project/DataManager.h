#pragma once
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class DataManager
{
private:
    // Using a managed array to store course names
    array<String^>^ courses;
    array<String^>^ creditHours;

public:
    DataManager() {
        // Initialize the managed array with course names
        courses = gcnew array<String^> {
            "Oral Communication",
                "Applied Physics",
                "OOP - CPP",
                "Calculus",
                "OOP - LAB",
                "Discrete Math"
        };
        creditHours = gcnew array<String^> {
            "3", "3", "3" , "3", "1", "3"
        };
    }

    // Method to display courses in the TableLayoutPanel
    void DisplayCourses(TableLayoutPanel^ tableLayoutPanel1) {
        // Clear existing controls and reset row count before adding new ones
        tableLayoutPanel1->Controls->Clear();
        tableLayoutPanel1->RowCount = 0; // Reset the row count
        tableLayoutPanel1->ColumnCount = 2; // Set the column count

        // Loop through the array and add each course to the TableLayoutPanel
        for (int i = 0; i < courses->Length; ++i) {
            Label^ courseLabel = gcnew Label();
            courseLabel->Text = courses[i];  // Directly set the course name (System::String^)
            courseLabel->AutoSize = true; // Optionally set AutoSize to true

            // Add the label to TableLayoutPanel at (0, i)
            tableLayoutPanel1->Controls->Add(courseLabel, 0, i);
            tableLayoutPanel1->RowCount++;
        }

        for (int i = 0; i < creditHours->Length; ++i) {
            Label^ courseLabel = gcnew Label();
            courseLabel->Text = creditHours[i];  // Directly set the course name (System::String^)
            courseLabel->AutoSize = true; // Optionally set AutoSize to true

            // Add the label to TableLayoutPanel at (0, i)
            tableLayoutPanel1->Controls->Add(courseLabel, 0, i);
            tableLayoutPanel1->RowCount++;
        }
    }
};
