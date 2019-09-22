#ifndef HERO_H
#define HERO_H

#include"Player.h"
#include"Enemy.h"

class Hero : public Player
{
private:
	bool SelectJudge;
	int HeelVolume;
public:
	// コンストラクタ
	Hero();
	// デストラクタ
	~Hero();

	// 取得関数
	int GetSelectJudge();

	// 入力関数
	void SetSelectJudge(bool Judge);

	// コマンド選択関数
	void CommandSelect();

	void BattleProcess(Enemy* enemy);

	// 死亡判定
	void DeathJudge();
};


#endif