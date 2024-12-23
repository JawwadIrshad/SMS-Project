#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

public ref class CustomTextBox : public TextBox
{
public:
    CustomTextBox()
    {
        // Customize initial appearance
        this->BackColor = Color::LightYellow;
        this->Font = gcnew Drawing::Font("Arial", 12, FontStyle::Bold);
    }

protected:
    // Override OnPaint to customize rendering
    virtual void OnPaint(PaintEventArgs^ e) override
    {
        // Call the base class method
        TextBox::OnPaint(e);

        // Create graphics object for custom drawing
        Graphics^ g = e->Graphics;

        // Define a rectangle for the border
        System::Drawing::Rectangle borderRectangle(0, 0, this->Width - 1, this->Height - 1);

        // Draw a custom border
        Pen^ borderPen = gcnew Pen(Color::Red, 2);
        g->DrawRectangle(borderPen, borderRectangle);

        // Clean up
        delete borderPen;
    }

    // Example: Override key press event
    virtual void OnKeyPress(KeyPressEventArgs^ e) override
    {
        // Prevent digits from being entered
        if (Char::IsDigit(e->KeyChar))
        {
            e->Handled = true; // Suppress the key
        }

        // Call the base method
        TextBox::OnKeyPress(e);
    }
};

