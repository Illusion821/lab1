#include<iostream>
using namespace std;
#include<windows.h>  
#include "Kadry.h"

KADRY::KADRY()
{
	name = new char[strlen("NoName") + 1];
	strcpy(name, "NoName");
	numberofshop = 0;
	lvl = 0;
	cout << "Конструктор без параметров " << this << endl;
}

KADRY::KADRY(char* NAME, int NUMBEROFSHOP, int LVL)
{
	name = new char[strlen(NAME) + 1];
	strcpy(name, NAME);
	numberofshop = NUMBEROFSHOP;
	lvl = LVL;
	cout << "Вызвался конструктор с параметрами  " << this << endl;
}
KADRY::~KADRY()
{
	cout << "Деструктор " << this << endl;
	delete[] name;
}

KADRY::KADRY(const KADRY& a)
{
	cout << "Вызвался конструктор копирования " << this << endl;
	this->name = new char[strlen(a.name) + 1];
	strcpy(this->name, a.name);
	this->lvl = a.lvl;
	this->numberofshop = a.numberofshop;
}

void KADRY::SetName(char* name)
{
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}
void KADRY::SetNumberOfShop(int numberofshop)
{
	this->numberofshop = numberofshop;
}
void KADRY::SetLvl(int lvl)
{
	this->lvl = lvl;
}
void KADRY::Set(char* NAME, int NUMBEROFSHOP, int LVL)
{
	name = new char[strlen(NAME) + 1];
	strcpy(name, NAME);
	numberofshop = NUMBEROFSHOP;
	lvl = LVL;
}
void KADRY::Show()
{
	cout << name << " " << numberofshop << " " << lvl << endl;
}
