  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#pragma once

#include <iostream>
#include <string>
#include "IntDinamicArray.h"
#include "NumberInModSystem.h"

class NumberInModSystem
{
public:
    int GetNumber();
    void PrintArray();
    void PrintNumber();
    void SetElementByIndex(int element, int index);
    int GetArrayElementFromIndex(int index);
    NumberInModSystem();
    NumberInModSystem(string number);
    NumberInModSystem(class IntDinamicArray);
    ~NumberInModSystem();
private:
    int number_;
    IntDinamicArray div_array_{ 0 };
};
