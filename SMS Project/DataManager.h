#pragma once
#include "User.h"
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

ref class DataManager
{
private:
    array<String^>^ courses;
    array<String^>^ creditHours;
    array<String^>^ marksOFCourses;

public:
    DataManager(array<String^>^ marks)
    {
        // Initialize course data using array assignment
        courses = gcnew array<String^>(6);
        courses[0] = "Oral Communication";
        courses[1] = "Applied Physics";
        courses[2] = "OOP - CPP";
        courses[3] = "Calculus";
        courses[4] = "OOP - LAB";
        courses[5] = "Discrete Math";

        creditHours = gcnew array<String^>(6);
        creditHours[0] = "3";
        creditHours[1] = "3";
        creditHours[2] = "3";
        creditHours[3] = "3";
        creditHours[4] = "1";
        creditHours[5] = "3";

        marksOFCourses = marks; // Assign the passed marks array
    }

    // Method to display courses, credit hours, and marks
    void DisplayCourses(TableLayoutPanel^ tableLayoutPanel)
    {
        // Clear existing controls
        tableLayoutPanel->Controls->Clear();
        tableLayoutPanel->RowCount = 0;
        tableLayoutPanel->ColumnCount = 3;

        // Add headers
        Label^ courseHeader = gcnew Label();
        courseHeader->Text = "Course";
        courseHeader->AutoSize = true;
        tableLayoutPanel->Controls->Add(courseHeader, 0, 0);

        Label^ creditHeader = gcnew Label();
        creditHeader->Text = "Credit Hours";
        creditHeader->AutoSize = true;
        tableLayoutPanel->Controls->Add(creditHeader, 1, 0);

        Label^ marksHeader = gcnew Label();
        marksHeader->Text = "Marks";
        marksHeader->AutoSize = true;
        tableLayoutPanel->Controls->Add(marksHeader, 2, 0);

        tableLayoutPanel->RowCount++;

        // Add rows for each course
        for (int i = 0; i < courses->Length; ++i)
        {
            // Add course name
            Label^ courseLabel = gcnew Label();
            courseLabel->Text = courses[i];
            courseLabel->AutoSize = true;
            tableLayoutPanel->Controls->Add(courseLabel, 0, tableLayoutPanel->RowCount);

            // Add credit hours
            Label^ creditLabel = gcnew Label();
            creditLabel->Text = creditHours[i];
            creditLabel->AutoSize = true;
            tableLayoutPanel->Controls->Add(creditLabel, 1, tableLayoutPanel->RowCount);

            // Add marks (if provided)
            String^ marks = (i < marksOFCourses->Length) ? marksOFCourses[i] : "N/A";
            Label^ marksLabel = gcnew Label();
            marksLabel->Text = marks;
            marksLabel->AutoSize = true;
            tableLayoutPanel->Controls->Add(marksLabel, 2, tableLayoutPanel->RowCount);

            // Increment row count
            tableLayoutPanel->RowCount++;
        }
    }

    double CalculateGPA(array<String^>^ marksOFCourses)
    {
        double totalWeightedPoints = 0.0;
        int totalCreditHours = 0;

        for (int i = 0; i < courses->Length; ++i)
        {
            try
            {
                // Convert marks and credit hours to integers
                int marks = (i < marksOFCourses->Length) ? Convert::ToInt32(marksOFCourses[i]) : 0;
                int credits = Convert::ToInt32(creditHours[i]);

                // Assuming marks are converted to grade points out of 4.0 scale
                double gradePoints = CalculateGradePoints(marks);

                // Multiply grade points by credit hours
                totalWeightedPoints += gradePoints * credits;

                // Sum up credit hours
                totalCreditHours += credits;
            }
            catch (FormatException^)
            {
                // Handle cases where the marks or credit hours are invalid
                MessageBox::Show("Invalid data detected. Skipping...");
            }
        }

        // Calculate GPA: weighted points divided by total credit hours
        return (totalCreditHours > 0) ? (totalWeightedPoints / totalCreditHours) : 0.0;
    }

    // Helper method to convert marks to grade points
    double CalculateGradePoints(int marks)
    {
        if (marks >= 85) return 4.0; // A
        else if (marks >= 75) return 3.5; // B+
        else if (marks >= 65) return 3.0; // B
        else if (marks >= 55) return 2.5; // C+
        else if (marks >= 45) return 2.0; // C
        else return 0.0; // F
    }
};