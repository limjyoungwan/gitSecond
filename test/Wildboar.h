#pragma once
#include "Monster.h"
class Wildboar : public Monster
{
private:
	char name[30];
public:
	Wildboar();
	virtual ~Wildboar();

	void Show() override;
};

