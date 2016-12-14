#include "Egg.h"
#include "God.h"
#include "Chicken.h"



Egg::Egg()
{
	Type = DEFAULTEGGTYPE;
}

Egg::Egg(int type)
{
	Type = type;
}
/*
Chicken* Egg::hatch(void)
{	
	return new Chicken(Type, god.SelectsGender());
}
*/