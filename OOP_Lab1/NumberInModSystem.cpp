  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include <iostream>
#include "IntDinamicArray.h"
#include "NumberInModSystem.h"
using namespace std;

// Вовзращает число, переведенное в
// систему остаточных классов в десятичном виде
int NumberInModSystem::GetNumber()
{
    return this->number_;
}

// Выводит на экран число в системе остаточных классов
void NumberInModSystem::PrintArray()
{
    for (int i = 0; i < div_array_.GetSize(); i++)
    {
        cout << div_array_.GetNumberFromIndex(i) << " ";
    }
    cout << endl;
}

// Выводит на экран число, переведенное в
// систему остаточных классов в десятичном виде
void NumberInModSystem::PrintNumber()
{
    cout << number_ << endl;
}

// Устанавливает значение в остаточный класс 
// (запись числа в определенную ячейку по индексу)
void NumberInModSystem::SetElementByIndex(int element, int index)
{
    div_array_.SetNumberByIndex(element, index);
}

// Возвращает элемент остаточного класса
// (возврат числа из определенной ячейки по индексу)
int NumberInModSystem::GetArrayElementFromIndex(int index)
{
    return div_array_.GetNumberFromIndex(index);
}

// Конструктор по умолчанию, который обнуляет число в десятичном виде
// переводимое в систему остаточных классов
// ради избежания непредвиденного поведения
NumberInModSystem::NumberInModSystem()
{
    this->number_ = 0;
}

// Конструктор с параметром строкой (число, введенное как строка
// переводится сначала в сишную строку, а затем в инт)
NumberInModSystem::NumberInModSystem(string number)
{
    this->number_ = atoi(number.c_str());
}

// Конструктор с переметром динамический массив числа в остаточной системе счисления
// копирует массив и заодно переодит число из системы остаточных классов в 
// десятичную систему счисления
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