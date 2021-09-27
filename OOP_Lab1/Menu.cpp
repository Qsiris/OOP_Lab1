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

// ����������� �� ���������,
// ������� �������������� ��� ���� ������ ��� ��������� 
// ��������������� ���������
Menu::Menu()
{
	this->user_choice_ = 0;
}

// ���������� �� ���������
Menu::~Menu()
{
}

// ������� ����
void Menu::MainMenu()
{
	system("chcp 1251");
	system("cls");
	cout << "��� ������������ ��������� ������ " <<
		"� �������� ���������� �������, �������� ��������:" << endl;
	cout << "1) ������� �����\n"
			<< "2) �������� ��� ������\n" 
				<< "3) ����� �����\n" << endl;
	cout << "������� ����� �� ������: ";
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

// ���� �������� ������ ���������
// ������ ����� � ������� ���������� �������
void Menu::AddNumberMenu()
{
	system("cls");
	int number = 0;
	cout << "�� ������� ���� �������� �����.\n�������� ������ �����:" << endl;
	cout << "1) ������ �������\n" << "2) ������� � ��������� ��������\n" 
		<< "3) ������� � ��������� �������� � ������� ���������� �������\n" << endl;
	cin >> number;
}

void Menu::DeleteNumberMenu()
{
	system("cls");
}

// ���� �������� ��� ������� � ������� ���������� �������
void Menu::OperationsMenu()
{
	system("cls");
}

// ���� ������ � �������
void Menu::OutputMenu()
{
	system("cls");
}
