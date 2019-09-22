#include <stdio.h>
#include <iostream>
#include <random>
#include <iostream>
#include <cstdlib>

#include"System.h"
#include"Player.h"
#include"Enemy.h"

System::System()
{
	SelectJudge = false;
	ActionSelect = 0;
};

System::~System()
{
	SelectJudge = false;
	ActionSelect = 0;
};

int System::GetActionSelect()
{
	return ActionSelect;
};

void System::SetActionSelect(int actionSelect)
{
	ActionSelect = actionSelect;
};

int System::GetSelectJudge()
{
	return SelectJudge;
};

void System::SetSelectJudge(bool selectJudge)
{
	SelectJudge = selectJudge;
};

void System::CleanRog()
{
	std::system("cls");
};

void System::DoRog()
{
	for (int a = 0; a < 3; a++)
	{
		std::cout << std::endl;
	}
};


void System::WarriorBattleProcess(Slime* slime, Warrior* warrior)
{

	switch (warrior->GetMoveSelect())
	{
	case Move::attack:// 攻撃判定 

		// ダメージを与えられるか
		if ((warrior->GetAT() - slime->GetDF()) > 0)
		{
			// ダメージ計算
			slime->SetHp(slime->GetHp() - (warrior->GetAT() - slime->GetDF()));
			std::cout << "敵に" << (warrior->GetAT() - slime->GetDF()) << "のダメージ" << std::endl;
		}
		else
			if ((warrior->GetAT() - slime->GetDF()) <= 0)
			{
				std::cout << "効果は無いようだ..." << std::endl;
			}

		break;


	case Move::skill:// スキル判定

		// ダメージを与えられるか
		if (((warrior->GetAT() * 2) - slime->GetDF()) > 0)
		{
			// ダメージ計算
			slime->SetHp(slime->GetHp() - ((warrior->GetAT() * 2) - slime->GetDF()));
			std::cout << "敵に" << ((warrior->GetAT() * 2) - slime->GetDF()) << "のダメージ" << std::endl;
		}
		else
			if ((warrior->GetAT() - slime->GetDF()) <= 0)
			{
				std::cout << "効果は無いようだ..." << std::endl;
			}

		break;


	case Move::heel:// 回復判定

		// 回復できるか
		if (warrior->GetHp() < 10)
		{
			std::mt19937 mt{ std::random_device{}() };
			std::uniform_int_distribution<int> rand(1, 3);

			warrior->SetHeelVolume(rand(mt));

			if (warrior->GetHp() + warrior->GetHeelVolume() > 10)
			{
				warrior->SetHp(10);
				std::cout << "体力を" << ((warrior->GetHp() + warrior->GetHeelVolume()) - 10) << "回復した" << std::endl;
			}
			else
			{
				warrior->SetHp(warrior->GetHp() + warrior->GetHeelVolume());

				std::cout << "体力を" << warrior->GetHeelVolume() << "回復した" << std::endl;
			}
		}
		else
		{
			std::cout << "効果は無いようだ..." << std::endl;
		}

		break;
	}

};

void System::WarriorDeathJudge(Warrior* warrior)
{
	if (warrior->GetHp() <= 0)
	{
		std::cout << "プレイヤーは死亡した" << std::endl;

	}
	else
	{
		warrior->SetSelectJudge(false);
		std::cin.clear();
		std::cin.ignore();
	}
};

void System::EnemyBattleProcess(Slime* slime, Warrior* warrior)
{
	switch (slime->GetMoveSelect())
	{
	case Move::attack:


		break;
	case Move::skill:
		break;
	case Move::heel:
		break;
	}


};

void System::SlimeDeathJudge(Slime* slime)
{
	if (slime->GetHp() <= 0)
	{
		std::cout << "スライムを倒した" << std::endl;
	}
	else
	{

	}
};


void System::TurnSelect(Warrior* warrior,Slime* slime)
{
	if (slime->GetHp() > 0)
	{
		DoRog();
		std::cout << "コマンドを選択してください" << std::endl;
		std::cout << "ターンを進める : 1 " << std::endl;

		std::cin >> ActionSelect;

		while (SelectJudge == false)
		{
			if (ActionSelect == 0)
			{
				std::cin.clear();
				std::cin.ignore();
			}
			else
				if (ActionSelect == 1)
				{
					SetSelectJudge(true);
					CleanRog();
				
				}
				else
				{
					std::cin.clear();
					std::cin.ignore();
				}

		}


		SetSelectJudge(false);
		std::cin.clear();
	    std::cin.ignore();
	}

};
