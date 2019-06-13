#pragma once
class Monster
{
protected:

	const static int SIZE = 10;

	int attribute;
	int attack;
	int hp;
	int name;
	int type;

	int X;
	int Y;

	class Player * player;

public:
	Monster();
	~Monster();
	
	virtual void Show() = 0;
	virtual void Move(class Player * player);
	void Tick(class Player * player);
	int GetX()
	{
		return X;
	}
	int GetY()
	{
		return Y;
	}
	int GetType()
	{
		return type;
	}
	int GetHP()
	{
		return hp;
	}
};

