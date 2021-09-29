  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#pragma once

#include "NumberInModSystem.h";

// Class of the program menu
class Menu
{
public:
	Menu();
	~Menu();
	void MainMenu();
	void AddNumberMenu();
	void DeleteNumberMenu();
	void OperationsMenu();
	void OutputMenu();
private:
	int user_choice_;
	int number_of_numbers;
	NumberInModSystem* array_of_numbers_;
};