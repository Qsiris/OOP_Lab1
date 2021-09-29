  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include "IntDinamicArray.h"

// Default constructor for dynamic array
// zeroes the size of the array and the pointer to it
// for the sake of initializing all the fields of the class
IntDinamicArray::IntDinamicArray()
{
    this->array_ = nullptr;
    this->size_ = 0;
}

// Constructor with parameter array size
// creates an array of the specified size
IntDinamicArray::IntDinamicArray(int size)
{
    this->array_ = new int[size];
    this->size_ = size;
}

// Getter to get the size of the array
int IntDinamicArray::GetSize()
{
    return this->size_;
}

// Procedure for resizing the array
// accept the size of the new array
void IntDinamicArray::Resize(int new_size)
{
    this->array_ = new int[new_size];
    size_ = new_size;
}

// Standard destructor
IntDinamicArray::~IntDinamicArray()
{
}

// Getter to return the item
// dynamic array by its index.
// parameter is the index at which the element is located in the array
int IntDinamicArray::GetNumberFromIndex(int index)
{
    return this->array_[index];
}

// Setter that allows you to assign a new value to an element by index
// for this it takes the element itself and its index as parameters
void IntDinamicArray::SetNumberByIndex(int element, int index)
{
    this->array_[index] = element;
}