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
{	this->array_of_numbers_ = nullptr;
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
	system("chcp 1251");
	while (true)
	{
		system("cls");
		cout << "Welcome to the program for working with"
			 << "the residual class system, choose an action: " << endl;
		cout << "1) Create number\n"
			 << "2) Delete number\n"
			 << "3) Operations on a number\n"
			 << "4) Displaying the number\n" << endl;
		cout << "Enter a number from the list: ";
		cin  >> this->user_choice_;
		if (this->user_choice_ < 5 && this->user_choice_ > 0)
		{
			break;
		}
	}
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