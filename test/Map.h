#pragma once
class Map
{
public:
	Map();
	~Map();

	void Draw(class Player * player, class Monster * monster[3]);

	int Data[10][10] = 
	{
		{1,1,1,1,1,1,1,1,1,1},
	    {1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
	    {1,1,1,1,1,1,1,1,1,1}
	};
};

