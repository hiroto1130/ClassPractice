#ifndef SLIME_H
#define SLIME_H

#include"Enemy.h"

class Slime : public Enemy
{
private:
	int rand;
	int HeelVolume;
public:
	Slime();
	~Slime();
	int GetHeelVolume();
	void SetHeelVolume(int heelVolume);

	void CommandSelect();

};

#endif