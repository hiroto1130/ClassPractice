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
		if ((warrior->GetAt() - slime->GetDf()) > 0)
		{
			// ダメージ計算
			slime->SetHp(slime->GetHp() - (warrior->GetAt() - slime->GetDf()));
			std::cout << "敵に" << (warrior->GetAt() - slime->GetDf()) << "のダメージ" << std::endl;
		}
		else
			if ((warrior->GetAt() - slime->GetDf()) <= 0)
			{
				std::cout << "効果は無いようだ..." << std::endl;
			}

		break;


	case Move::skill:// スキル判定

		// ダメージを与えられるか
		if (((warrior->GetAt() * 2) - slime->GetDf()) > 0)
		{
			// ダメージ計算
			slime->SetHp(slime->GetHp() - ((warrior->GetAt() * 2) - slime->GetDf()));
			std::cout << "敵に" << ((warrior->GetAt() * 2) - slime->GetDf()) << "のダメージ" << std::endl;
		}
		else
			if ((warrior->GetAt() - slime->GetDf()) <= 0)
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

		// ダメージを与えられるか
		if ((slime->GetAt() - warrior->GetDf()) > 0)
		{
			// ダメージ計算
			warrior->SetHp(warrior->GetHp() - (slime->GetAt() - warrior->GetDf()));
			std::cout << "プレイヤーに" << (slime->GetAt() - warrior->GetDf()) << "のダメージ" << std::endl;
		}
		else
			if ((slime->GetAt() - warrior->GetDf()) <= 0)
			{
				std::cout << "　　　　miss　　　　" << std::endl;
			}

		break;
	case Move::skill:

		// ダメージを与えられるか
		if (((slime->GetAt() * 2) - warrior->GetDf()) > 0)
		{
			// ダメージ計算
			warrior->SetHp(warrior->GetHp() - ((slime->GetAt() * 2) - warrior->GetDf()));
			std::cout << "プレイヤーに" << ((slime->GetAt() * 2) - warrior->GetDf()) << "のダメージ" << std::endl;
		}
		else
			if ((slime->GetAt() - warrior->GetDf()) <= 0)
			{
				std::cout << "　　　　miss　　　　" << std::endl;
			}

		break;
	case Move::heel:

		// 回復できるか
		if (slime->GetHp() < 10)
		{
			std::mt19937 mt{ std::random_device{}() };
			std::uniform_int_distribution<int> rand(1, 2);

			slime->SetHeelVolume(rand(mt));

			if (slime->GetHp() + slime->GetHeelVolume() > 10)
			{
				slime->SetHp(10);
				std::cout << "体力を" << ((slime->GetHp() + slime->GetHeelVolume()) - 10) << "回復した" << std::endl;
			}
			else
			{
				slime->SetHp(slime->GetHp() + slime->GetHeelVolume());

				std::cout << "体力を" << slime->GetHeelVolume() << "回復した" << std::endl;
			}
		}
		else
		{
			std::cout << "効果は無いようだ..." << std::endl;
		}
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
		std::cout << "ターンを進める : 1 自身のステータス表示 : 2" << std::endl;


		while (SelectJudge == false)
		{
		
			std::cin >> ActionSelect;
			
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
				
				}else
					if (ActionSelect == 2)
					{
						CleanRog();
						std::cout << "/////////////////////////////////////////////////////////////////////" << std::endl;
						std::cout << "                                                                     " << std::endl;
						std::cout << "                           ステータス                                " << std::endl;
						std::cout << "                                                                     " << std::endl;
						std::cout << "            HP : "<<warrior->GetHp()<<"      MP : " <<warrior->GetMp()<<"      AT : "<<warrior->GetAt()<<"      DF : "<<warrior->GetDf()<<"              " << std::endl;
						std::cout << "                                                                     " << std::endl;
						std::cout << "/////////////////////////////////////////////////////////////////////" << std::endl;

						DoRog();
						std::cout << "コマンドを選択してください" << std::endl;
						std::cout << "ターンを進める : 1 自身のステータス表示 : 2" << std::endl;
						std::cin.clear();
						std::cin.ignore();
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
