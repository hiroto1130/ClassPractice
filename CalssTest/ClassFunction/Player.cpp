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

		if (MoveSelect == 0) // 単語なのかのチェック
		{
			std::cout << "再入力してください " << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}
		else
			if (MoveSelect == 1) // 攻撃
			{
				SetSelectJudge(true); // 防御
				std::cout << "プレイヤーの攻撃" << std::endl;
			}
			else
				if (MoveSelect == 2)
				{
					SetSelectJudge(true);
					std::cout << "プレイヤーは防御している" << std::endl;
				}
				else
					if (MoveSelect >= 3) // 3以上の値が入力されたか
					{
						std::cout << "再入力してください " << std::endl;
						std::cin.clear();
						std::cin.ignore();
					}
	}

}