  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include <iostream>
#include "IntDinamicArray.h"
#include "NumberInModSystem.h"
using namespace std;

int NumberInModSystem::GetNumber()
{
    return this->number_;
}

void NumberInModSystem::PrintArray()
{
    for (int i = 0; i < div_array_.GetSize(); i++)
    {
        cout << div_array_.GetNumberFromIndex(i) << " ";
    }
    cout << endl;
}

void NumberInModSystem::PrintNumber()
{
    cout << number_ << endl;
}

void NumberInModSystem::SetElementByIndex(int element, int index)
{
    div_array_.SetNumberByIndex(element, index);
}

int NumberInModSystem::GetArrayElementFromIndex(int index)
{
    return div_array_.GetNumberFromIndex(index);
}

NumberInModSystem::NumberInModSystem()
{
    this->number_ = 0;
}

NumberInModSystem::NumberInModSystem(string number)
{
    this->number_ = atoi(number.c_str());
}

NumberInModSystem::NumberInModSystem(class IntDinamicArray array_input)
{
    this->number_ = 0;
    this->div_array_.Resize(array_input.GetSize());
    for (int i = 0; i < array_input.GetSize(); i++)
    {
        this->div_array_.SetNumberByIndex(array_input.GetNumberFromIndex(i), i);
    }
}

NumberInModSystem::~NumberInModSystem()
{

}