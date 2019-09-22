#include"Slime.h"
#include"Warrior.h"
#include"System.h"

int main()
{
	Warrior* warrior = new Warrior;
	Slime* slime = new Slime;
	System* system = new System;

	while (warrior->GetHp() > 0 && slime->GetHp() > 0)
	{
		// プレイヤーの行動選択
		warrior->CommandSelect();

		// プレイヤーの戦闘処理
		system->WarriorBattleProcess(slime, warrior);

		// 空処理
		system->DoRog();

		// 敵の行動選択
        slime->CommandSelect();

		// プレイヤーの死亡判定
		system->WarriorDeathJudge(warrior);

		// 敵の死亡判定
		system->SlimeDeathJudge(slime);

		// ターンループ処理
		system->TurnSelect(warrior, slime);
	}


	delete warrior;
	delete slime;
	delete system;
}