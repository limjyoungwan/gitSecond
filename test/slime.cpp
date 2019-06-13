#include "slime.h"
#include <stdio.h>

slime::slime()
	: name("&")
{
	type = 0;
}

slime::~slime()
{

}

void slime::Show()
{
	if (hp < 0)
		hp = 0;

	printf("이름 %s 공격력 %d HP %d \n", name, attack, hp);
}
