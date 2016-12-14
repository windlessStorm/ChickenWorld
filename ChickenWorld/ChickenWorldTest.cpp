#include "God.h"
#include "Chicken.h"
#include "Egg.h"
#include <ctime>
#include <iostream>
 
int main(void)
{
	std::srand((unsigned)time(NULL));
	God *god = new God();
	Chicken* c1 = god->CreateMaleChicken();
	Chicken* c2 = god->CreateFemaleChicken();
	Chicken* c3 = god->CreateMaleChicken();
	Chicken* c4 = god->CreateFemaleChicken();

	c1->fucks(c2);
	c1->fucks(c4);
	c3->fucks(c4);
	c1->fucks(c3);

	delete c1;
	delete c2;
	delete c3;
	delete c4;

	return 0;
}