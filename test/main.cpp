#include <stdio.h>
#include "Map.h"
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include "slime.h"
#include "Goblin.h"
#include "Wildboar.h"

int main()
{
	Map * map = new Map();
	Player * player = new Player();
	Monster * slimes = new slime();
	Monster * goblin = new Goblin();
	Monster * wlidboar = new Wildboar();

	Monster * monster[3] = { slimes, goblin, wlidboar };
	Engine * engine = new Engine(player, monster, map);

	engine->Begin();
	delete engine;
	engine = nullptr;
	delete[] monster;
	delete wlidboar;
	wlidboar = nullptr;
	delete goblin;
	goblin = nullptr;
	delete slimes;
	slimes = nullptr;
	delete player;
	for (int i = 0; i < 3; i++)
		monster[i] = nullptr;
	player = nullptr;
	delete map;
	map = nullptr;

	return 0;
}