  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include <iostream>
#include <string>
#include "IntDinamicArray.h"
#include "NumberInModSystem.h"

using namespace std;

// Returns the number converted to
// system of residual classes in decimal
int NumberInModSystem::GetNumber()
{
    return number_;
}

// Displays the number in the residual class system
void NumberInModSystem::PrintArray()
{
    for (int i = 0; i < div_array_.GetSize(); i++)
    {
        cout << "[" << div_array_.GetNumberFromIndex(i) << "]";
    }
    cout << endl;
}

// Displays the number translated to
// system of residual classes in decimal form
void NumberInModSystem::PrintNumber()
{
    cout << number_ << endl;
}

// Sets the value to the residual class
// (writing a number to a specific cell by index)
void NumberInModSystem::SetElementByIndex(int element, int index)
{
    div_array_.SetNumberByIndex(element, index);
}

// Returns the element of the residual class
// (return a number from a specific cell by index)
int NumberInModSystem::GetArrayElementFromIndex(int index)
{
    return div_array_.GetNumberFromIndex(index);
}

// Default constructor that zeroes the number in decimal
// translatable to the system of residual classes
// to avoid unexpected behavior for the index)
NumberInModSystem::NumberInModSystem()
{
    number_ = 0;
}

// Constructor with parameter string (number entered as string
// translated first into sishnuyu string, and then into int)
NumberInModSystem::NumberInModSystem(std::string number)
{
    this->number_ = atoi(number.c_str());
}

// Permeable constructor dynamic array of residual numbers
// copies the array and at the same time 
// converts the number from the residual class system to
// decimal number system
NumberInModSystem::NumberInModSystem(IntDinamicArray array_input)
{
    number_ = 0;
    div_array_.Resize(array_input.GetSize());
    for (int i = 0; i < array_input.GetSize(); i++)
    {
        div_array_.SetNumberByIndex(array_input.GetNumberFromIndex(i), i);
    }
}

// Standard destructor
NumberInModSystem::~NumberInModSystem()
{
}