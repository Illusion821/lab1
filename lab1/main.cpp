#include<iostream>
using namespace std; 
#include<windows.h>  
#include "Kadry.h"


void main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	KADRY();
	KADRY a("Иванов", 2, 8), b = a;
	b.Show();
	a.Set("Петров", 3, 5);
	a.GetName();
	a.GetNumberOfShop();
	a.GetLvl();
	KADRY c = b;
	c.SetName("Валунов");
	c.SetLvl(2);
	c.Show();
	KADRY worker[3];
	worker[0].Set("Сверчков", 4, 2),
		worker[0].Show();
	worker[1].Set("Жуков", 2, 9),
		worker[1].Show();
	worker[2].Set("Лебедев", 1, 12);
	void (KADRY:: * pf)();
	pf = &KADRY::Show;
	(worker[2].*pf)();
	KADRY* Workers;

	Workers = new KADRY[3];
	Workers[0].Set("Петрушин", 16, 15);
	Workers[1].Set("Складин", 12, 11);
	Workers[2].Set("Радужный", 10, 4);
	cout << endl;
	int i;
	for (i = 0; i < 3; i++)
		Workers[i].Show();
	delete[] Workers;
	return;
}
