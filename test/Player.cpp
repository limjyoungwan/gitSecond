#include "Player.h"
#include "Monster.h"
#include <stdio.h>


Player::Player()
	:X(1), Y(1) , name("@") , attack(30) , hp(100)
{
}

Player::~Player()
{
	delete monster;
	for(int i = 0; i < 3; i++)
		monster[i] = nullptr;
}

void Player::Show()
{
	printf("이름 %s 공격력 %d hp %d \n", name, attack, hp);
}

void Player::Move(int keycode, class Monster * monster[3])
{
	for(int i = 0; i < 3; i++)
		this->monster[i] = monster[i];
   	
		switch (keycode)
		{

		case RIGHT:
			if (X < SIZE - 2)
				X++;
			for (int i = 0; i < 3; i++)
			{
				if (monster[i]->GetX() == X && monster[i]->GetY() == Y)
				{
					hp -= 10;
					X--;
				}
			}
			break;
		case Left:
			if (X > 1)
				X--;
			for (int i = 0; i < 3; i++)
			{
				if (monster[i]->GetX() == X && monster[i]->GetY() == Y)
				{
					hp -= 10;
					X++;
				}
			}
			break;
		case UP:
			if (Y > 1)
				Y--;
			for (int i = 0; i < 3; i++)
			{
				if (monster[i]->GetX() == X && monster[i]->GetY() == Y)
				{
					hp -= 10;
					Y++;
				}
			}
			break;
		case DOWN:
			if (Y < SIZE - 2)
				Y++;
			for (int i = 0; i < 3; i++)
			{
				if (monster[i]->GetX() == X && monster[i]->GetY() == Y)
				{
					hp -= 10;
					Y--;
				}
			}
			break;
		}		
}

void Player::Tick(int keycode, class Monster * monster[3])
{
	Move(keycode, monster);
}
