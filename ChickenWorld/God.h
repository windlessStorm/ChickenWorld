#pragma once
#include "Chicken.h"

#define DLEVEL 1
class God
{
	public:
		God();
		Chicken* CreateMaleChicken(void);
		Chicken* CreateMaleChicken(int);

		Chicken* CreateFemaleChicken();
		Chicken* CreateFemaleChicken(int);

		int SelectsGender();
		int worksInMysteriousWays(int);
};