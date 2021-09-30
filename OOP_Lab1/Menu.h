  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include <string>
#include "NumberInModSystem.h";
#pragma once

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
	string number_str_;
	IntDinamicArray number_dinamic_array_;
	int menu_number_;
	int user_choice_;
	NumberInModSystem* array_of_numbers_;
	int current_element_index;
	int size_of_array_;
};