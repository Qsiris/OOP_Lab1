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

const int MAINMENU = 0;
const int ADDNUMBERMENU = 1;
const int DELETENUMBERMENU = 2;
const int OPERATIONSMENU = 3;
const int OUTPUTMENU = 4;
const int EXITTHEPROGRAMM = 5;

// Default constructor,
// which initializes all fields of the class to avoid
// unexpected behavior
Menu::Menu()
{	this->array_of_numbers_ = nullptr;
	this->user_choice_ = 0;
	this->menu_number_ = 0;
	this->current_element_index = 0;
	this->size_of_array_ = 0;
	this->number_dinamic_array_;
	this->number_str_ = "";
}

// Default destructor
Menu::~Menu()
{
}

// Main menu
void Menu::MainMenu()
{
	if (menu_number_ == MAINMENU)
	{
		system("chcp 1251");
		while (true)
		{
			system("cls");
			cout << "Welcome to the program for working with"
				 << "the residual class system, choose an action: " << endl;
			cout << "1) Create number\n"
				 << "2) Delete number\n"
				 << "3) Operations on a number\n"
				 << "4) Displaying the number\n"
				 << "5) Exit the programm" << endl;
			cout << "Enter a number from the list: ";
			cin >> this->menu_number_;
			if (this->menu_number_ == EXITTHEPROGRAMM)
			{
				return;
			}
			if (this->menu_number_ < 5 && this->menu_number_ > 0)
			{
				break;
			}
		}
		if (menu_number_ == ADDNUMBERMENU)
			AddNumberMenu();
		if (menu_number_ == DELETENUMBERMENU)
			DeleteNumberMenu();
		if (menu_number_ == OPERATIONSMENU)
			OperationsMenu();
		if (menu_number_ == OUTPUTMENU)
			OutputMenu();
		if (menu_number_ == EXITTHEPROGRAMM)
			return;
	}
}