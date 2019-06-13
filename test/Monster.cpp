#include "Monster.h"
#include "Player.h"
#include <stdlib.h>
#include <time.h>


Monster::Monster()
	: X(5), Y(5), hp(100), attack(30) , type(0)
{

}

Monster::~Monster()
{
	delete player;
	player = nullptr;
}

void Monster::Move(class Player * player)
{
	this->player = player;

	srand(time(NULL));
	int random = rand() % 4;

	switch (random)
	{
		case 0:
			if (X < SIZE - 2)
				X++;
			if (player->GetX() == X && player->GetY() == Y)
			{
				hp -= 30;
				X--;
			}
			break;
		case 1:
			if (X > 1)
				X--;
			if (player->GetX() == X && player->GetY() == Y)
			{
				hp -= 30;
				X++;
			}
			break;
		case 2:
			if (Y > 1)
				Y--;
			if (player->GetX() == X && player->GetY() == Y)
			{
				hp -= 30;
				Y++;
			}
			break;
		case 3:
			if (Y < SIZE - 2)
				Y++;
			if (player->GetX() == X && player->GetY() == Y)
			{
				hp -= 30;
				Y--;
			}
			break;
	}
}

void Monster::Tick(class Player * player)
{
	Move(player);
}
