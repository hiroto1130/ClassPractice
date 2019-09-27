#ifndef SLIME_H
#define SLIME_H

#include"Enemy.h"

class Slime : public Enemy
{
private:
	int AT;
public:
	// コンストラクタ
	Slime();
	// デストラクタ
	~Slime();
	// 関数
	int GetAt();
	void SetAt(int at);
	void ShowAt();
};

#endif