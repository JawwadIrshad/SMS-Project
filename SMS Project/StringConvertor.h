#pragma once
#include <string>
#using <System.dll>  // Include the System.dll to use System namespace

using namespace System;

class StringConverter
{
public:
    // Convert String^ to std::string
    static std::string ToStdString(System::String^ managedString)
    {
        // Handle null or empty input
        if (managedString == nullptr)
            return "";

        // Use ToCharArray() to get the array of chars
        array<System::Char>^ charArray = managedString->ToCharArray();

        // Create a std::string to store the result
        std::string result;

        // Convert each System::Char to a native char and append to the std::string
        for (int i = 0; i < charArray->Length; ++i) {
            result.push_back(static_cast<char>(charArray[i]));
        }

        return result;
    }

    // Convert std::string to System::String^
    static System::String^ ToSystemString(const std::string& stdString)
    {
        return gcnew System::String(stdString.c_str());
    }
};
