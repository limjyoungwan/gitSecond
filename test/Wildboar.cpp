#include "Wildboar.h"
#include <stdio.h>


Wildboar::Wildboar()
	: name("*")
{
	X = 3;
	Y = 3;
	type = 1;
}


Wildboar::~Wildboar()
{
}

void Wildboar::Show()
{
	if (hp < 0)
		hp = 0;

	printf("이름 %s 공격력 %d HP %d \n", name, attack, hp);
}
