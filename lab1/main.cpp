#include<iostream>
using namespace std; 
#include<windows.h>  
#include "Kadry.h"


void main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	KADRY();
	KADRY a("������", 2, 8), b = a;
	b.Show();
	a.Set("������", 3, 5);
	a.GetName();
	a.GetNumberOfShop();
	a.GetLvl();
	KADRY c = b;
	c.SetName("�������");
	c.SetLvl(2);
	c.Show();
	KADRY worker[3];
	worker[0].Set("��������", 4, 2),
		worker[0].Show();
	worker[1].Set("�����", 2, 9),
		worker[1].Show();
	worker[2].Set("�������", 1, 12);
	void (KADRY:: * pf)();
	pf = &KADRY::Show;
	(worker[2].*pf)();
	KADRY* Workers;

	Workers = new KADRY[3];
	Workers[0].Set("��������", 16, 15);
	Workers[1].Set("�������", 12, 11);
	Workers[2].Set("��������", 10, 4);
	cout << endl;
	int i;
	for (i = 0; i < 3; i++)
		Workers[i].Show();
	delete[] Workers;
	return;
}
