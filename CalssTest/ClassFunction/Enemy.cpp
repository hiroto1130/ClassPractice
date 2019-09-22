#include"Enemy.h"

Enemy::Enemy()
{
	HP = 10;
	AT = 2;
	DF = 1;
	MoveSelect = 0;

}

Enemy::~Enemy()
{
	HP = 0;
	AT = 0;
	DF = 0;
	MoveSelect = 0;
}

int Enemy::GetHp()
{
	return HP;
}

int Enemy::GetMoveSelect()
{
	return MoveSelect;
}

int Enemy::GetAt()
{
	return AT;
}

int Enemy::GetDf()
{
	return DF;
}

void Enemy::SetHp(int hp)
{
	HP = hp;
}

void Enemy::SetMoveSelect(int moveSelect)
{
	MoveSelect = moveSelect;
}

void Enemy::SetAT(int at)
{
	AT = at;
}

void Enemy::SetDF(int df)
{
	DF = df;
}
