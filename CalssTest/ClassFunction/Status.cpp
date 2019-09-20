#include"Status.h"

Status::Status()
{
	HP = 10;
	AT = 1;
	DF = 1;
	MoveSelect = 0;

}

Status::~Status()
{
	HP = 0;
	AT = 0;
	DF = 0;
	MoveSelect = 0;
}

int Status::GetHp()
{
	return HP;
}

int Status::GetMoveSelect()
{
	return MoveSelect;
}

int Status::GetAT()
{
	return AT;
}

int Status::GetDF()
{
	return DF;
}

void Status::SetHp(int hp)
{
	HP = hp;
}

void Status::SetMoveSelect(int moveSelect)
{
	MoveSelect = moveSelect;
}

void Status::SetAT(int at)
{
	AT = at;
}

void Status::SetDF(int df)
{
	DF = df;
}
