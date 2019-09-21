#ifndef PLAYER_H
#define PLAYER_H

#include"Status.h"
#include"Enemy.h"

class Player : public Status
{
private:
	bool SelectJudge;
public:
	// コンストラクタ
	Player();
	// デストラクタ
	~Player();
	
	// 取得関数
	int GetSelectJudge();

	// 入力関数
	void SetSelectJudge(bool Judge);

	// コマンド選択関数
	void CommandSelect();

	void BattleProcess(Enemy* enemy);
};


#endif