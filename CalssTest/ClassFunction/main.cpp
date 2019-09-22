#include"Slime.h"
#include"Hero.h"
#include"System.h"

int main()
{
	Hero* hero = new Hero;
	Slime* slime = new Slime;
	System* system = new System;

	while (hero->GetHp() > 0 && slime->GetHp() > 0)
	{
		hero->CommandSelect();
		system->CleanRog();
		hero->BattleProcess(slime);

        slime->CommandSelect();
		
		hero->DeathJudge();
		slime->DeathJudge();
	}


	delete hero;
	delete slime;
	delete system;
}