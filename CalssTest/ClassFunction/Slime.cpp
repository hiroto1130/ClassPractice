#include<stdio.h>
#include<iostream>
#include <random>
#include <iostream>

#include"Player.h"
#include"Slime.h"


Slime::Slime()
{

};

Slime::~Slime()
{

};

void Slime::CommandSelect()
{
	std::mt19937 mt{ std::random_device{}() };
	std::uniform_int_distribution<int> Rand(1, 10);
	rand = Rand(mt);

	if (HP > 0)
	{
		if (rand < 6)
		{
			std::cout << "スライムの攻撃" << std::endl;
			MoveSelect = Move::attack;
		}
		else
			if (rand < 9 && rand > 6)
			{
				std::cout << "スライムの体当たり" << std::endl;
				MoveSelect = Move::skill;
			}
			else
			{
				std::cout << "スライムは回復している" << std::endl;
				MoveSelect = Move::heel;
			}
	}
	else
	{

	}
};


