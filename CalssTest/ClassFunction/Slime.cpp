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
	std::uniform_int_distribution<int> rand(1, 3);
	MoveSelect = rand(mt);

	switch (MoveSelect)
	{
	case 1:
		std::cout << "スライムの攻撃" << std::endl;
		break;
	case 2:
		std::cout << "スライムの体当たり" << std::endl;
		break;
	case 3:
		std::cout << "スライムはぼーっとしている" << std::endl;
		break;
	}

};


void Slime::DeathJudge()
{
	if (HP <= 0)
	{
		std::cout << "スライムを倒した" << std::endl;
	}
};

