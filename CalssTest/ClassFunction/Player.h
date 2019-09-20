#ifndef PLAYER_H
#define PLAYER_H

#include"Status.h"

class Player : public Status
{
private:
	bool SelectJudge;
public:
	Player();
	~Player();

	int GetSelectJudge();
	void SetSelectJudge(bool Judge);
	void CommandSelect();
};


#endif