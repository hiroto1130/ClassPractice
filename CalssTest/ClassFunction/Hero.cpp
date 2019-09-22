#include<stdio.h>
#include<iostream>
#include <random>
#include <iostream>

#include"Hero.h"
#include"Enemy.h"

Hero::Hero()
{
	SelectJudge = false;
}

Hero::~Hero()
{
	SelectJudge = false;
}


int Hero::GetSelectJudge()
{
	return SelectJudge;
}

void Hero::SetSelectJudge(bool Judge)
{
	SelectJudge = Judge;
}


void Hero::CommandSelect()
{
	std::cout << "コマンドを選択してください" << std::endl;
	std::cout << "攻撃:1 スキル:2 回復:3" << std::endl;

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
				SetSelectJudge(true);
				std::cout << "プレイヤーの攻撃" << std::endl;
			}
			else
				if (MoveSelect == 2) // スキル
				{
					SetSelectJudge(true);
					std::cout << "プレイヤーは溜め斬りを放った" << std::endl;
				}
				else
					if (MoveSelect == 3) // 回復
					{

						std::cout << "プレイヤーは回復の呪文を唱えた" << std::endl;
						
					}else
						if (MoveSelect >= 4) // 4以上の値が入力されたか
						{
							std::cout << "再入力してください " << std::endl;
							std::cin.clear();
							std::cin.ignore();
						}
	}

}

void Hero::BattleProcess(Enemy* enemy)
{

	switch (MoveSelect)
	{
	case PlayerMove::attack:// 攻撃判定 

		// ダメージを与えられるか
		if ((AT - enemy->GetDF()) > 0)
		{
			// ダメージ計算
			enemy->SetHp(enemy->GetHp() - (AT - enemy->GetDF()));
			std::cout << "敵に" << (AT - enemy->GetDF()) << "のダメージ" << std::endl;
		}else
			if ((AT - enemy->GetDF()) <= 0)
			{
				std::cout << "効果は無いようだ..." << std::endl;
			}

		break;

		
	case PlayerMove::skill:// スキル判定

		// ダメージを与えられるか
		if (((AT * 2) - enemy->GetDF()) > 0)
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
		
		break;


	case PlayerMove::heel:// 回復判定

		// 回復できるか
		if (HP < 10)
		{
			std::mt19937 mt{ std::random_device{}() };
			std::uniform_int_distribution<int> rand(1, 3);
			HeelVolume = rand(mt);

			if (HP + HeelVolume > 10)
			{
				HP = 10;
			}
			else
			{
				HP = HP + HeelVolume;
			}
		}
		else
		{
			std::cout << "効果は無いようだ..." << std::endl;
		}

		break;
	}

}

void Hero::DeathJudge()
{
	if (HP <= 0)
	{
		std::cout << "プレイヤーは死亡した" << std::endl;
	}
};

