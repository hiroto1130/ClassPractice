#ifndef STATUS_H
#define STATUS_H

class Status
{
protected:
	int HP;
	int MoveSelect;
	int AT;
	int DF;
public:
	// コンストラクタ
	Status();
	// デストラクタ
	~Status();
	// 取得関数
	int GetHp();
	int GetMoveSelect();
	int GetAT();
	int GetDF();
	// 設定関数
	void SetHp(int hp);
	void SetMoveSelect(int moveSelect);
	void SetAT(int at);
	void SetDF(int df);

};


#endif