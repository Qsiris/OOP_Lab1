  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include "IntDinamicArray.h"

IntDinamicArray::IntDinamicArray()
{
    this->array_ = nullptr;
    this->size_ = 0;
}

IntDinamicArray::IntDinamicArray(int size)
{
    this->array_ = new int[size];
    this->size_ = size;
}

int IntDinamicArray::GetSize()
{
    return this->size_;
}

void IntDinamicArray::Resize(int new_size)
{
    this->array_ = new int[new_size];
    size_ = new_size;
}

IntDinamicArray::~IntDinamicArray()
{
}

int IntDinamicArray::GetNumberFromIndex(int index)
{
    return this->array_[index];
}

void IntDinamicArray::SetNumberByIndex(int element, int index)
{
    this->array_[index] = element;
}