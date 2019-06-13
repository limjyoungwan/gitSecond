#pragma once
#include "Monster.h"
class slime : public Monster 
{
private:
	char name[30];
public:

	slime();
	virtual ~slime();

	void Show() override;
};

