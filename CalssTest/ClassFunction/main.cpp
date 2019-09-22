#include"Slime.h"
#include"Hero.h"

int main()
{
	Hero* hero = new Hero;
	Slime* slime = new Slime;

	while (hero->GetHp() >= 0 && slime->GetHp() >= 0)
	{
		hero->CommandSelect();
		// hero->CleanRog();
		slime->CommandSelect();
		hero->BattleProcess(slime);
	}


	delete hero;
	delete slime;
}