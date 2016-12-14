#include <iostream>
#include "God.h"
#include "Egg.h"
#include "Chicken.h"
#include <ctime>

//God god;


Chicken::Chicken()
{
	God *god = new God();
	this->Type = DEFAULTCHICKENTYPE;
	this->Sex = god->SelectsGender();
#if DLEVEL > 0
	if (this->Sex == 1)
		std::cout << "A male chicken of type " << this->Type << " is born!\n";
	else
		std::cout << "A female chicken of type " << this->Type << " is born!\n";
#endif
	delete god;
}

Chicken::Chicken(int type, int sex)
{
	this->Type = type;
	this->Sex = sex;

#if DLEVEL > 0
	if(sex == 1)
		std::cout << "A male chicken of type "<< type << " is born!\n";
	else
		std::cout << "A female chicken of type " << type << " is born!\n";
#endif

}

void Chicken::fucks(Chicken* partner)
{
	God *god = new God();
	if (!(this->Sex & partner->Sex))
	{
		if (god->worksInMysteriousWays(70))
		{
			if (this->Sex == 1)
				this->layEgg();
			else
				partner->layEgg();
#if DLEVEL > 0
			std::cout << "Sex resulted in pregnancy, Female lays an egg\n";
#endif

		}
#if DLEVEL > 0
		else
			std::cout << "Sex did not result in pregnancy.\n";
#endif
	}
#if DLEVEL > 0
	else
		std::cout << "FKING HOMO CHICKENS!\n";
#endif
	delete god;
}

Egg* Chicken::layEgg(void)
{
	return new Egg(Type);
}