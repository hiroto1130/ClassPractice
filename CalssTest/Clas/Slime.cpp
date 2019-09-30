#include"Slime.h"
#include"BattleSystem.h"

Slime::Slime()
{
	Status = die;

}

Slime::~Slime()
{


}

void Slime::CommandSelect()
{



};

void Slime::DeathJudge()
{
	if (m_hp == 0)
	{
		Status = die;
	}

}

