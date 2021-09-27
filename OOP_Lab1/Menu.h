  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#pragma once

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
};