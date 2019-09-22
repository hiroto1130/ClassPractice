#ifndef SLIME_H
#define SLIME_H

#include"Enemy.h"
#include"Hero.h"

class Slime : public Enemy
{
private:

public:
	Slime();
	~Slime();
	void CommandSelect();
	// 死亡判定
	void DeathJudge();
};

#endif