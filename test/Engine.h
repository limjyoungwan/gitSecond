#pragma once
class Engine
{
private:
	class Player * player;
	class Monster * monster[3];
	class Map * map;

public:
	Engine(class Player * _player, class Monster * _monster[3], class Map * _map);
	~Engine();

	void Begin();
	void Tick(int keycode, class Monster * monster[3], class Player * player);
	void Draw();

};

