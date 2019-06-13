#include "Engine.h"
#include "Map.h"
#include "Monster.h"
#include "Player.h"
#include <stdio.h>
#include <conio.h>

Engine::Engine(class Player * _player, class Monster * _monster[3], class Map * _map)
	: player(_player), map(_map)
{
	for (int i = 0; i < 3; i++)
	{
		monster[i] = _monster[i];
	}
}

Engine::~Engine()
{
	delete map;
	map = nullptr;
	for (int i = 0; i < 3; i++)
	{
		delete monster[i];
		monster[i] = nullptr;
	}
	delete player;
	player = nullptr;
}

void Engine::Begin()
{
	while (true)
	{
		int keycode = getch();
		Tick(keycode, monster, player);
		Draw();
		player->Show();
		for (int i = 0; i < 3; i++)
			monster[i]->Show();

		if (monster[0]->GetHP() == 0 && monster[1]->GetHP() == 0 && monster[2]->GetHP() == 0)
		{
			printf("플레이어 승리!");
			break;
		}
	}
}

void Engine::Tick(int keycode, class Monster * monster[3], class Player * player)
{
	player->Tick(keycode, monster);
	for(int i = 0; i < 3; i++)
		monster[i]->Tick(player);
}

void Engine::Draw()
{
	map->Draw(player,monster);
}
