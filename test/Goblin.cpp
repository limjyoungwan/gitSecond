#include "Goblin.h"
#include <stdio.h>


Goblin::Goblin()
	: name("+")
{
	X = 8;
	Y = 8;
	type = 2;
}


Goblin::~Goblin()
{
}

void Goblin::Show()
{
	if (hp < 0)
		hp = 0;

	printf("�̸� %s ���ݷ� %d HP %d \n", name, attack, hp);
}
