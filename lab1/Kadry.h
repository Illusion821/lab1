#ifndef class_H
#define class_H
class KADRY
{
	char* name;
	int numberofshop;
	int lvl;

public:
	KADRY();
	KADRY(char* NAME, int POWER, int COST);
	KADRY(const KADRY& other);
	~KADRY();
	char* GetName() { return name; }
	int GetNumberOfShop() { return numberofshop; }
	int GetLvl() { return lvl; }
	void SetName(char* NAME);
	void SetNumberOfShop(int NUMBEROFSHOP);
	void SetLvl(int LVL);
	void Set(char* NAME, int NUMBEROFSHOP, int LVL);
	void Show();
};
#endif
