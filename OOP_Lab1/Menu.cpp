  //-----------------------------------------------------------------------//
 //     Author: Max Solokhin 20-IVT-1-PO-B - BSTU Bryansk student         //
//-----------------------------------------------------------------------//

#include <iostream>
#include "NumberInModSystem.h"
#include "Menu.h"
using namespace std;

const int ADDNUMBERMENU = 1;
const int DELETENUMBERMENU = 2;
const int OPERATIONSMENU = 3;
const int OUTPUTMENU = 4;

// Конструктор по умолчанию,
// который инициализирует все поля класса для избежания 
// непредвиденного поведения
Menu::Menu()
{
	this->user_choice_ = 0;
}

// Деструктор по умолчанию
Menu::~Menu()
{
}

// Главное меню
void Menu::MainMenu()
{
	system("chcp 1251");
	system("cls");
	cout << "Вас приветствует программа работы " <<
		"с системой остаточных классов, выберите действие:" << endl;
	cout << "1) Создать число\n"
			<< "2) Операции над числом\n" 
				<< "3) Вывод числа\n" << endl;
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

// Меню создания нового экземляра
// класса числа в системе остаточных классов
void Menu::AddNumberMenu()
{
	system("cls");
	int number = 0;
	cout << "Вы выбрали меню создания числа.\nВыберите способ ввода:" << endl;
	cout << "1) Просто создать\n" << "2) Создать и присвоить значение\n" 
		<< "3) Создать и присвоить значение в системе остаточных классов\n" << endl;
	cin >> number;
}

void Menu::DeleteNumberMenu()
{
	system("cls");
}

// Меню операций над числами в системе остаточных классов
void Menu::OperationsMenu()
{
	system("cls");
}

// Меню вывода в консоль
void Menu::OutputMenu()
{
	system("cls");
}
