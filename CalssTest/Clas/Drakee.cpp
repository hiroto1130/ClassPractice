#include"Drakee.h"
#include"BattleSystem.h"

Drakee::Drakee()
{



};

Drakee::~Drakee()
{



};

void Drakee::CommandSelect()
{



};


void Drakee::DeathJudge()
{
	if (m_hp == 0)
	{
		Status = die;
	}

};
