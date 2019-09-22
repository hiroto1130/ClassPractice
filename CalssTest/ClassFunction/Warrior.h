#ifndef HERO_H
#define HERO_H

#include"Player.h"

class Warrior : public Player
{
private:
	bool SelectJudge;
	int HeelVolume;
public:
	// コンストラクタ
	Warrior();
	// デストラクタ
	~Warrior();

	// 取得関数
	int GetSelectJudge();
	int GetHeelVolume();

	// 入力関数
	void SetSelectJudge(bool Judge);
	void SetHeelVolume(int heelVolume);

	// コマンド選択関数
	void CommandSelect();
};


#endif