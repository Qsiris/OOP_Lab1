  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#pragma once

#include <string>
#include "IntDinamicArray.h"

using namespace std;

// Class number in the residual class system
class NumberInModSystem
{
public:
    int GetNumber();
    void PrintArray();
    void PrintNumber();
    void SetNumber(string number);
    void SetElementByIndex(int element, int index);
    int GetArrayElementFromIndex(int index);
    NumberInModSystem();
    NumberInModSystem(string number);
    NumberInModSystem(class IntDinamicArray);
    ~NumberInModSystem();
private:
    int number_;
    IntDinamicArray div_array_;
};
