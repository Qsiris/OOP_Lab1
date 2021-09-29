  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include <iostream>
#include <string>
#include <cstdlib>
#include "IntDinamicArray.h"
#include "NumberInModSystem.h"
#include "Menu.h"

using namespace std;

const int ADDNUMBERMENU = 1;
const int DELETENUMBERMENU = 2;
const int OPERATIONSMENU = 3;
const int OUTPUTMENU = 4;

const int CREATEANDINIT = 1;
const int CREATEANDINITSOK = 2;

// Default constructor,
// which initializes all fields of the class to avoid
// unexpected behavior
Menu::Menu()
{
	system("chcp 1251");
	this->array_of_numbers_ = nullptr;
	this->number_of_numbers = 0;
	this->user_choice_ = 0;
}

// Default destructor
Menu::~Menu()
{
}

// Main menu
void Menu::MainMenu()
{
	system("cls");
	cout << "Вас приветствует программа работы " <<
		"с системой остаточных классов, выберите действие:" << endl;
	cout << "1) Создать число\n"
			<< "2) Операции над числом\n" 
				<< "4) Вывод числа\n" << endl;
	cout << "Введите номер из списка: ";
	cin >> this->user_choice_;
	switch (user_choice_)
	{
	case ADDNUMBERMENU:
		AddNumberMenu();
		break;
	case DELETENUMBERMENU:
		break;
	case OPERATIONSMENU:
		OperationsMenu();
		break;
	case OUTPUTMENU:
		OutputMenu();
		break;
	default:
		break;
	}
}

// Menu for creating a new instance
// class of a number in the system of residual classes
void Menu::AddNumberMenu()
{
	IntDinamicArray array_of_sok{ number_of_numbers };
	int i = 0;
	system("cls");
	cout << "Вы выбрали меню создания числа.\nВыберите способ ввода:" << endl;
	cout << "1) Создать и присвоить значение\n" 
		 << "2) Создать и присвоить значение в системе остаточных классов\n" << endl;
	cin >> user_choice_;
	switch (user_choice_)
	{
	case CREATEANDINIT:
		system("cls");
		cout << "Введите число:" << endl;
		cin >> user_choice_;
		number_of_numbers++;
		array_of_numbers_ = new NumberInModSystem[number_of_numbers]{(this->user_choice_)};
		break;
	case CREATEANDINITSOK:
		system("cls");
		cout << "Введите число в системе остаточных классов (остановка ввода -1):" << endl;
		while (true)
		{
			cout << "a[" << i << "] = ";
			cin >> user_choice_;
			if (user_choice_ == -1)
			{
				break;
			}
			else
			{
				array_of_sok.SetNumberByIndex(user_choice_, i);
				i++;
			}
		}
		number_of_numbers++;
		array_of_numbers_ = new NumberInModSystem[number_of_numbers]{array_of_sok};
		break;
	default:
		break;
	}
	MainMenu();
}

// Menu for deleting a number
void Menu::DeleteNumberMenu()
{
	system("cls");
}

// Menu of operations on numbers in the system of residual classes
void Menu::OperationsMenu()
{
	system("cls");
}

// Console output menu
void Menu::OutputMenu()
{
	system("cls");
	cout << "Вы выбрали меню вывода чисел. Введенные числа:\n";
	for (int i = 0; i < number_of_numbers; i++)
	{
		cout << i + 1 << ") " << array_of_numbers_[i].GetNumber() << endl;
		for (int j = 0; j < number_of_numbers; j++)
		{
			cout << i + 1 << ") " << array_of_numbers_[i].GetArrayElementFromIndex(j) << endl;
		}
	}
}
