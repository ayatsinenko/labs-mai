#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <locale>
#include <windows.h>
using namespace std;

class Children
{
	char name[32];
	char surname[32];
	int age;
public:
	void fillData();
	void showData();
};

int main()
{
	setlocale(0, "");
	Children FirstChild;
	Children SecondChild;
	cout << "Введите данные ребёнка!\n";
	FirstChild.fillData();
	SecondChild.fillData();

	FirstChild.showData();
	SecondChild.showData();
	_getch();
	return 0;
}
void  Children::fillData()
{
	cout << "Имя: ";
	cin.getline(name, 32);
	OemToCharA(name, name);
	cout << "Фамилия: ";
	cin.getline(surname, 32);
	OemToCharA(surname, surname);
	cout << "Возраст: ";
	cin >> age;
	cin.get();
}
void  Children::showData()
{
	cout << name << " " << surname << " " << age << " лет;\n";
}