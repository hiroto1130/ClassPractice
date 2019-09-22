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
	std::uniform_int_distribution<int> rand(1, 10);
	MoveSelect = rand(mt);

	if (MoveSelect < 6)
	{
		std::cout << "スライムの攻撃" << std::endl;

	}
	else
		if (MoveSelect < 9 && MoveSelect > 6)
		{
			std::cout << "スライムの体当たり" << std::endl;
		}
		else
		{
			std::cout << "スライムはぼーっとしている" << std::endl;
		}

};


void Slime::DeathJudge()
{
	if (HP <= 0)
	{
		std::cout << "スライムを倒した" << std::endl;
	}
	else
	{

	}
};

