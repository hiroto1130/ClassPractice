#include"CharaCter.h"

CharaCter::CharaCter()
{

	m_hp = 0;
	m_mp = 0;
	m_at = 0;
	m_df = 0;
	m_move_select = 0;

};

CharaCter::~CharaCter()
{

	m_hp = 0;
	m_mp = 0;
	m_at = 0;
	m_df = 0;
	m_move_select = 0;

};

int CharaCter::GetHP()
{

	return m_hp;

};

int CharaCter::GetMP()
{

	return m_mp;

};

int CharaCter::GetAT()
{

	return m_at;

};

int CharaCter::GetDF()
{

	return m_df;

};

int CharaCter::GetMoveSelect()
{

	return m_move_select;

};

void CharaCter::SetHP(int hp)
{

	m_hp = hp;

};

void CharaCter::SetMP(int mp)
{

	m_mp = mp;

};

void CharaCter::SetAT(int at)
{

	m_at = at;

};

void CharaCter::SetDF(int df)
{

	m_df = df;

};

void CharaCter::SetMoveSelect(int moveSelect)
{

	m_move_select = moveSelect;

};

void CharaCter::CommandSelect()
{


}

void CharaCter::DeathJudge()
{


}
