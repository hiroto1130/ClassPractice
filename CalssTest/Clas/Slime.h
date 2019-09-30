#ifndef SLIME_H
#define SLIME_H

#include"CharaCter.h"

class Slime : public CharaCter
{
private:


public:
	// コンストラクタ
	Slime();

	// デストラクタ
	~Slime();


	// ------ コマンド選択関数 -------

	virtual void CommandSelect();

	// -------------------------------

	// --------- 死亡判定 ------------

	virtual void DeathJudge();

	// -------------------------------
};

#endif
