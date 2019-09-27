#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
protected:
	int HP;
	int MP;
public:
	// コンストラクタ
	Enemy();
	// デストラクタ
	~Enemy();
	// 関数
	int GetHp();
	int GetMp();
	void SetHp(int hp);
	void SetMp(int mp);
	void ShowHp();
	void ShoeMp();
};



#endif
