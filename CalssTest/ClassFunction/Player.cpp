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

void Player::BattleProcess(Enemy* enemy)
{

	switch (MoveSelect)
	{
		// 攻撃判定 
	case 1:
		// 防御しているとき
		if (enemy->GetMoveSelect() == 2)
		{
			// ダメージを与えられるか
			if ((AT - enemy->GetDF()) > 0)
			{
				// ダメージ計算
				enemy->SetHp(enemy->GetHp() - (AT - enemy->GetDF()));
				std::cout << "敵に" << (AT - enemy->GetDF()) << "のダメージ" << std::endl;
			}
			else
				if ((AT - enemy->GetDF()) <= 0)
				{
					std::cout << "効果は無いようだ..." << std::endl;
				}
		}
		else // 防御してないとき
		{
			enemy->SetHp(enemy->GetHp() - AT);
			std::cout << "敵に" << AT << "のダメージ" << std::endl;
		}
		break;

		// 防御判定
	case 2:
		// 敵が攻撃しているかどうか
		if (enemy->GetMoveSelect() == 1)
		{
			// 受けるダメージがあるか
			if ((enemy->GetAT() - DF) > 0)
			{
				// ダメージ計算
				HP = HP - (enemy->GetAT() - DF);
				std::cout << "プレイヤーに" << (enemy->GetAT() - DF) << "のダメージ" << std::endl;
			}
			else
				if ((enemy->GetAT() - DF) <= 0)
				{

					std::cout << "ガード成功" << std::endl;
				}
		}
		break;
	}

}