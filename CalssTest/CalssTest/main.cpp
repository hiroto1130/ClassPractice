#include"Enemy.h"

namespace enemy
{
	const int HP = 100;
	const int MP = 50;
	const int AT = 20;

}



int main()
{
	EnemyTwo *enemyTwo = new EnemyTwo;

	enemyTwo->SetAt(enemy::AT);
	enemyTwo->ShowAt();

	enemyTwo->SetHp(enemy::HP);
	enemyTwo->ShowHp();

	enemyTwo->SetMp(enemy::MP);
	enemyTwo->ShoeMp();


	delete enemyTwo;

	



}