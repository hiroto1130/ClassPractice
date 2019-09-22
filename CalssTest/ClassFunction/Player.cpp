#include <stdio.h>
#include <iostream>
#include <cstdlib>

#include "Player.h"

Player::Player()
{
	HP = 10;
	MP = 5;
	AT = 1;
	DF = 1;
	MoveSelect = 0;

}

Player::~Player()
{
	HP = 0;
	MP = 0;
	AT = 0;
	DF = 0;
	MoveSelect = 0;
}

int Player::GetHp()
{
	return HP;
}

int Player::GetMp()
{
	return MP;
}

int Player::GetMoveSelect()
{
	return MoveSelect;
}

int Player::GetAT()
{
	return AT;
}

int Player::GetDF()
{
	return DF;
}

void Player::SetHp(int hp)
{
	HP = hp;
}

void Player::SetMp(int mp)
{
	MP = mp;
}

void Player::SetMoveSelect(int moveSelect)
{
	MoveSelect = moveSelect;
}

void Player::SetAT(int at)
{
	AT = at;
}

void Player::SetDF(int df)
{
	DF = df;
}

void Player::CleanRog()
{
	std::system("cls");
}