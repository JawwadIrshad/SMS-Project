#pragma once
#include "User.h"
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
//d
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
        tableLayoutPanel1->ColumnCount = 3; // Set the column count

        // Loop through the array and add each course to the TableLayoutPanel
        for (int i = 0; i < courses->Length; ++i) {
            Label^ courseLabel = gcnew Label();
            courseLabel->Text = courses[i];  // Directly set the course name (System::String^)
            courseLabel->AutoSize = true; // Optionally set AutoSize to true

            // Add the label to TableLayoutPanel at (0, i)
            tableLayoutPanel1->Controls->Add(courseLabel, 0, i);
            //Added row count check
            if(tableLayoutPanel1->RowCount < courses->Length)
                tableLayoutPanel1->RowCount++;
        }
        //Credit hours Column
        for (int i = 0; i < creditHours->Length; ++i) {
            Label^ courseLabel = gcnew Label();
            courseLabel->Text = creditHours[i];  // Directly set the course name (System::String^)
            courseLabel->AutoSize = true; // Optionally set AutoSize to true

            // Add the label to TableLayoutPanel at (0, i)
            tableLayoutPanel1->Controls->Add(courseLabel, 0, i);
            //Added row count check
            if (tableLayoutPanel1->RowCount < creditHours->Length)
                tableLayoutPanel1->RowCount++;
        }
        User user;
        //Marks Column
        const std::vector<std::string>& courses = user.getMarksOfCourses();

        for (int i = 0; i < courses.size(); ++i) {
            // Convert std::string to System::String^
            System::String^ courseLabelText = gcnew System::String(courses[i].c_str());

            // Create a new label for each course
            Label^ courseLabel = gcnew Label();
            courseLabel->Text = courseLabelText;
            courseLabel->AutoSize = true;

            // Add the label to the table layout
            tableLayoutPanel1->Controls->Add(courseLabel, 0, i);

            // Increase the row count after adding each course
            tableLayoutPanel1->RowCount++;
        }
    }
  
};
