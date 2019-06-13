#pragma once
#include "Monster.h"
class Goblin : public Monster
{
private:
	char name[30];
public:
	Goblin();
	virtual ~Goblin();

	void Show() override;
};

