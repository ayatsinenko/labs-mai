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
	cout << "������� ������ ������!\n";
	FirstChild.fillData();
	SecondChild.fillData();

	FirstChild.showData();
	SecondChild.showData();
	_getch();
	return 0;
}
void  Children::fillData()
{
	cout << "���: ";
	cin.getline(name, 32);
	OemToCharA(name, name);
	cout << "�������: ";
	cin.getline(surname, 32);
	OemToCharA(surname, surname);
	cout << "�������: ";
	cin >> age;
	cin.get();
}
void  Children::showData()
{
	cout << name << " " << surname << " " << age << " ���;\n";
}