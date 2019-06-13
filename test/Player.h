#pragma once
class Player
{

private:
	char name[30];
	int attack;
	int hp;
	int speed;
	int attribute;

	int X;
	int Y;

	const static int Left = 75;
	const static int RIGHT = 77;
	const static int UP = 72;
	const static int DOWN = 80;
	const static int SIZE = 10;

	class Monster * monster[3];

public:

	Player();
	~Player();

	int  GetX()
	{
		return X;
	}
	int  GetY()
	{
		return Y;
	}

	void Show();
	void Move(int keycode, class Monster * monster[3]);
	void Tick(int keycode, class Monster * monster[3]);	
};

