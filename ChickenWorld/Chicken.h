#pragma once
#include "Egg.h"

#define DEFAULTCHICKENTYPE 1
#define MALE 1
#define FEMALE 2

class Chicken
{
public:
	Chicken();
	Chicken(int, int);
	void fucks(Chicken*);
	Egg* layEgg(void);
//	~Chicken();

private:
	int Type;
	int Sex;
};



