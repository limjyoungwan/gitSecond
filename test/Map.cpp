#include "Map.h"
#include "Player.h"
#include "Monster.h"
#include <stdio.h>
#include <stdlib.h>

Map::Map()
{
}

Map::~Map()
{
}

void Map::Draw(class Player * player, class Monster * monster[3])
{
	system("cls");
	for (int y = 0; y < 10; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			if (monster[0]->GetX() == x && monster[0]->GetY() == y)
			{
				printf("&");
			}
			else if (monster[1]->GetX() == x && monster[1]->GetY() == y)
			{
				printf("*");
			}
			else if (monster[2]->GetX() == x && monster[2]->GetY() == y)
			{
				printf("+");
			}
			else if (player->GetX() == x && player->GetY() == y)
			{
				printf("@");
			}
			else
			{
				printf("%d", Data[y][x]);
			}
		}
		printf("\n");
	}
}
