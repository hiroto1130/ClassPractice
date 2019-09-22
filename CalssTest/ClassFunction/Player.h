#ifndef PLAYER_H
#define PLAYER_H

class Player
{
protected:
	int HP;
	int MP;
	int MoveSelect;
	int AT;
	int DF;
public:
	// コンストラクタ
	Player();
	// デストラクタ
	~Player();
	// 取得関数
	int GetHp();
	int GetMp();
	int GetMoveSelect();
	int GetAT();
	int GetDF();
	// 設定関数
	void SetHp(int hp);
	void SetMp(int mp);
	void SetMoveSelect(int moveSelect);
	void SetAT(int at);
	void SetDF(int df);

	// ログ削除
	void CleanRog();

	enum PlayerMove
	{
		temp,
		attack,
		skill,
		heel
	};
};


#endif