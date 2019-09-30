#ifndef DRAKEE_H
#define DRAKEE_H

#include"CharaCter.h"

class Drakee : public CharaCter
{
private:


public:
	// コンストラクタ
	Drakee();

	// デストラクタ
	~Drakee();


	// ------ コマンド選択関数 -------

	virtual void CommandSelect();

	// -------------------------------

	// --------- 死亡判定 ------------

	virtual void DeathJudge();

	// -------------------------------
};

#endif