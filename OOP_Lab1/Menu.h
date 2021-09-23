#pragma once

class Menu
{
public:
	Menu();
	~Menu();

private:
	int user_choice_;
};

Menu::Menu()
{
	this->user_choice_ = 0;
}

Menu::~Menu()
{
}