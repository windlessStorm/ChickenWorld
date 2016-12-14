#include "God.h"
#include "Chicken.h"
#include "Egg.h"
#include <ctime>
#include <iostream>

God::God()
{
	//std::srand((unsigned)time(NULL));
}

Chicken* God::CreateMaleChicken()
{
	return new Chicken(DEFAULTCHICKENTYPE, MALE);
}
Chicken* God::CreateMaleChicken(int type)
{
	return new Chicken(type, MALE);
}


Chicken* God::CreateFemaleChicken()
{
	return new Chicken(DEFAULTCHICKENTYPE, FEMALE);
}
Chicken* God::CreateFemaleChicken(int type)
{
	return new Chicken(type, FEMALE);
}


int God::SelectsGender()
{
	return (rand()+1)%2;
}
int God::worksInMysteriousWays(int chance)
{	
	int magic = (rand() + 1) % 100;
#if DLEVEL > 1
	std::cout << " magic number : " << magic << std::endl;
#endif	
	if (magic <= chance)
		return 1;
	else
		return 0;
}
