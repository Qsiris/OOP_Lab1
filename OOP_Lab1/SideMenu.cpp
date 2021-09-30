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
		cin >> this->number_str_;
		this->array_of_numbers_ =
			new NumberInModSystem[this->size_of_array_];
		this->array_of_numbers_[this->current_element_index].SetNumber(this->number_str_);
		this->size_of_array_++;
		break;
	case CREATEANDINITSOK:
		cout << "Input array (to stop input !): ";
		while (true)
		{/*
			cout << "a[" << i << "] = ";
			cin >> number;
			number1.SetNumberByIndex(atoi(number.c_str()), i);
			i++;
			number1.Resize(i + 1);*/
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

// Menu of operations on numbers 
// in the system of residual classes
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
