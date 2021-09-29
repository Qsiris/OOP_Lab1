  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#pragma once

// Dynamic array class
class IntDinamicArray
{
public:
    IntDinamicArray();
    IntDinamicArray(int size);
    int GetSize();
    void Resize(int new_size);
    ~IntDinamicArray();
    int GetNumberFromIndex(int index);
    void SetNumberByIndex(int element, int index);

private:
    int* array_;
    int size_;
};
