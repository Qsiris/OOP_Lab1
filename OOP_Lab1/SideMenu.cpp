//-----------------------------------------------------------------------//
//     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include <iostream>
#include <string>
#include <cstdlib>
#include "IntDinamicArray.h"
#include "NumberInModSystem.h"
#include "Menu.h"

const int CREATEANDINIT = 1;
const int CREATEANDINITSOK = 2;

// Menu for creating a new instance
// class of a number in the system of residual classes
void Menu::AddNumberMenu()
{
	string number;
	IntDinamicArray number1;
	int i = 0;
	while (true)
	{
		system("cls");
		cout << "You have selected the number creation menu.\n"
			<< "Select input option:\n"
			<< "1) Create and init in decimal\n"
			<< "2) Create and init in mod system\n";
		cin >> this->user_choice_;
		if (this->user_choice_ < 3 && this->user_choice_ > 0)
		{
			break;
		}
	}
	switch (this->user_choice_)
	{
	case CREATEANDINIT:
		cout << "Input number: ";
		cin >> number;
		break;
	case CREATEANDINITSOK:
		cout << "Input array: ";
		while (true)
		{
			cout << "a[" << i << "] = ";
			cin >> number;
			number1.SetNumberByIndex(atoi(number.c_str()), i);
			i++;
			number1.Resize(i + 1);
		}
		break;
	default:
		break;
	}
}

// Menu for deleting a number
void Menu::DeleteNumberMenu()
{
	system("cls");
	this->menu_number_ = 0;
}

// Menu of operations on numbers in the system of residual classes
void Menu::OperationsMenu()
{
	system("cls");
	this->menu_number_ = 0;
}

// Console output menu
void Menu::OutputMenu()
{
	system("cls");
	this->menu_number_ = 0;
}
