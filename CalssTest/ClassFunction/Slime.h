#ifndef SLIME_H
#define SLIME_H

#include"Enemy.h"

class Slime : public Enemy
{
private:
	int rand;
public:
	Slime();
	~Slime();
	void CommandSelect();

};

#endif