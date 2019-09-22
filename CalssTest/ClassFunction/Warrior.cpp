#include<stdio.h>
#include<iostream>
#include <random>
#include <iostream>

#include"Warrior.h"
#include"Enemy.h"
#include"System.h"

Warrior::Warrior()
{
	HeelVolume = 0;
	SelectJudge = false;
}

Warrior::~Warrior()
{
	HeelVolume = 0;
	SelectJudge = false;
}


int Warrior::GetSelectJudge()
{
	return SelectJudge;
}

void Warrior::SetSelectJudge(bool Judge)
{
	SelectJudge = Judge;
}

int Warrior::GetHeelVolume()
{
	return HeelVolume;
}

void Warrior::SetHeelVolume(int heelVolume)
{
	HeelVolume = heelVolume;
}

void Warrior::CommandSelect()
{
	std::cout << "コマンドを選択してください" << std::endl;
	std::cout << "攻撃:1 スキル:2 回復:3" << std::endl;

	while (SelectJudge == false)
	{
		std::cin >> MoveSelect;
		std::system("cls");

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
						SetSelectJudge(true);
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


