#ifndef SYSTEM_H
#define SYSTEM_H

#include"Warrior.h"
#include"Slime.h"

class System
{
private:
	int ActionSelect;
	bool SelectJudge;
public:
	System();
	~System();
	
	int GetActionSelect();
	int GetSelectJudge();

	void SetActionSelect(int actionSelect);
	void SetSelectJudge(bool selectJudge);

	// ログ削除
	void CleanRog();

	// ログを進める
	void DoRog();

	// 戦闘処理
	void WarriorBattleProcess(Slime* slime,Warrior *warrior);
	void EnemyBattleProcess(Slime* slime, Warrior* warrior);

	// 死亡判定
	void WarriorDeathJudge(Warrior* warrior);
	void SlimeDeathJudge(Slime* slime);

	// ターン更新
	void TurnSelect(Warrior* warrior,Slime* slime);

};

#endif