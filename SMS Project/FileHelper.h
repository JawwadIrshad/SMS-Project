#pragma once
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Runtime::InteropServices;

ref class FileHelper abstract {
public:
    FileHelper(){}


    virtual void LoadDataFromCSV(std::string data) = 0;
    virtual void DisplayCourses(TableLayoutPanel^ tableLayoutPanel) = 0;
    virtual float CalculateGPA() = 0;

};
