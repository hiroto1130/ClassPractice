#ifndef CHARACTER_H
#define CHARACTER_H

class CharaCter
{
protected:

	int m_hp;
	int m_mp;
	int m_at;
	int m_df;
	int m_move_select;
	int Status;

public:
	// コンストラクタ
	CharaCter();
	// デストラクタ
	~CharaCter();

	// ---------- ゲッター ------------
	// --------------------------------
	int GetHP();
	int GetMP();
	int GetAT();
	int GetDF();
	int GetMoveSelect();
	// --------------------------------


	// ---------- セッター ------------
	// --------------------------------
	void SetHP(int hp);
	void SetMP(int mp);
	void SetAT(int at);
	void SetDF(int df);
	void SetMoveSelect(int moveSelect);
	// -------------------------------

	// ------ コマンド選択関数 -------

	virtual void CommandSelect();

	// -------------------------------

	// --------- 死亡判定 ------------

	virtual void DeathJudge();

	// -------------------------------

};


#endif
