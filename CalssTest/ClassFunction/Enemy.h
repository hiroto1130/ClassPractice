#ifndef ENEMY_H
#define ENEMY_H

#include"Status.h"

class Enemy : public Status
{
private:

public:
	Enemy();
	~Enemy();
	void CommandSelect();
};

#endif