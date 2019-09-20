#include<stdio.h>
#include<iostream>

#include"Player.h"

Player::Player()
{
	SelectJudge = false;
}

Player::~Player()
{
	SelectJudge = false;
}


int Player::GetSelectJudge()
{
	return SelectJudge;
}

void Player::SetSelectJudge(bool Judge)
{
	SelectJudge = Judge;
}


void Player::CommandSelect()
{
	std::cout << "コマンドを選択してください" << std::endl;
	std::cout << "攻撃:1 防御:2 " << std::endl;

	while (SelectJudge == false)
	{
		std::cin >> MoveSelect;

		switch (MoveSelect)
		{
		case 0:
			std::cout << "再入力してください " << std::endl;
			break;
		case 1:
			SetSelectJudge(true);
			break;
		case 2:
			SetSelectJudge(true);
			break;
		}

	}

}