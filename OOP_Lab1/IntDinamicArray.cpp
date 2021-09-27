  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include "IntDinamicArray.h"

//  онструктор по умолчанию дл€ динамического массива
// обнул€ет размер массива и указатель на него
// ради инициализации всех полей класса
IntDinamicArray::IntDinamicArray()
{
    this->array_ = nullptr;
    this->size_ = 0;
}

//  онструктор с параметром размер массива
// создает массив указанного размера
IntDinamicArray::IntDinamicArray(int size)
{
    this->array_ = new int[size];
    this->size_ = size;
}

// √еттер дл€ получени€ размера массива
int IntDinamicArray::GetSize()
{
    return this->size_;
}

// ѕроцедура изменени€ размера массива
// принемает размер нового массива
void IntDinamicArray::Resize(int new_size)
{
    this->array_ = new int[new_size];
    size_ = new_size;
}

IntDinamicArray::~IntDinamicArray()
{
}

// √еттер дл€ возврата элемента 
// динамического массива по его индексу.
// параметр индекс, по которому находитс€ элемент в массиве
int IntDinamicArray::GetNumberFromIndex(int index)
{
    return this->array_[index];
}

// —еттер позвол€ющий присвоить элементу по индексу новое значение
// дл€ этого принимает в параметры сам элемент и его индекс
void IntDinamicArray::SetNumberByIndex(int element, int index)
{
    this->array_[index] = element;
}