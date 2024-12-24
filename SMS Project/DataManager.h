#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
//#include <msclr/marshal_cppstd.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

ref class DataManager
{
private:
    array<String^>^ courses;
    array<String^>^ creditHours;
    array<String^>^ marksOFCourses;

public:
    // Constructor that loads data for a specific user
    DataManager(std::string username)
    {
        LoadDataFromCSV(username);
    }

    // Load data from CSV file for a specific user
    void LoadDataFromCSV(std::string username)
    {
        std::ifstream file("marks.csv");
        if (!file.is_open())
        {
            throw std::runtime_error("Could not open marks.csv file.");
        }

        std::string line;
        std::vector<std::string> headers;
        std::vector<std::string> marksVector;

        // Read the header row (course names)
        if (getline(file, line))
        {
            std::stringstream ss(line);
            std::string column;
            while (getline(ss, column, ','))
            {
                headers.push_back(column);
            }
        }

        // Hardcoded credit hours for each course
        std::vector<std::string> creditHoursVector = { "3", "3", "3", "3", "3", "1" };

        // Find the user's row and extract marks
        while (getline(file, line))
        {
            std::stringstream ss(line);
            std::string userIdentifier;
            getline(ss, userIdentifier, ','); // Read the username/identifier

            if (userIdentifier == username)
            {
                std::string mark;
                while (getline(ss, mark, ','))
                {
                    marksVector.push_back(mark);
                }
                break; // Exit the loop after finding the user
            }
        }

        file.close();

        // Convert data to managed arrays
        courses = gcnew array<String^>(headers.size() - 1); // Exclude the username column
        creditHours = gcnew array<String^>(creditHoursVector.size());
        marksOFCourses = gcnew array<String^>(marksVector.size());

        for (size_t i = 1; i < headers.size(); ++i) // Skip the username column
        {
            courses[i - 1] = gcnew String(headers[i].c_str());
        }

        for (size_t i = 0; i < creditHoursVector.size(); ++i)
        {
            creditHours[i] = gcnew String(creditHoursVector[i].c_str());
        }

        for (size_t i = 0; i < marksVector.size(); ++i)
        {
            marksOFCourses[i] = gcnew String(marksVector[i].c_str());
        }
    }

    // Display courses, credit hours, and marks in a TableLayoutPanel
    void DisplayCourses(TableLayoutPanel^ tableLayoutPanel)
    {
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

            // Add marks
            String^ marks = (i < marksOFCourses->Length) ? marksOFCourses[i] : "N/A";
            Label^ marksLabel = gcnew Label();
            marksLabel->Text = marks;
            marksLabel->AutoSize = true;
            tableLayoutPanel->Controls->Add(marksLabel, 2, tableLayoutPanel->RowCount);

            tableLayoutPanel->RowCount++;
        }
    }

    // Calculate GPA based on marks and credit hours
    float CalculateGPA()
    {
        float totalWeightedPoints = 0.0f;
        int totalCreditHours = 0;

        for (int i = 0; i < courses->Length; ++i)
        {
            try
            {
                int marks = Convert::ToInt32(marksOFCourses[i]);
                int credits = Convert::ToInt32(creditHours[i]);
                float gradePoints = CalculateGradePoints(marks);
                totalWeightedPoints += gradePoints * credits;
                totalCreditHours += credits;
            }
            catch (Exception^)
            {
                MessageBox::Show("Invalid data detected. Skipping...");
            }
        }

        return (totalCreditHours > 0) ? totalWeightedPoints / totalCreditHours : 0.0f;
    }

    // Convert marks to grade points
    float CalculateGradePoints(int marks)
    {
        if (marks >= 85) return 4.0f; // A
        if (marks >= 75) return 3.5f; // B+
        if (marks >= 65) return 3.0f; // B
        if (marks >= 55) return 2.5f; // C+
        if (marks >= 45) return 2.0f; // C
        return 0.0f; // F
    }
};
