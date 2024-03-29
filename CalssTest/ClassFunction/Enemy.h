﻿#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
protected:
	int HP;
	int MoveSelect;
	int AT;
	int DF;
public:
	// コンストラクタ
	Enemy();
	// デストラクタ
	~Enemy();
	// 取得関数
	int GetHp();
	int GetMoveSelect();
	int GetAt();
	int GetDf();
	// 設定関数
	void SetHp(int hp);
	void SetMoveSelect(int moveSelect);
	void SetAT(int at);
	void SetDF(int df);

};

#endif