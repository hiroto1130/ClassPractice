#include<stdio.h>
#include<iostream>
#include <random>
#include <iostream>

#include"Enemy.h"

Enemy::Enemy()
{

};

Enemy::~Enemy()
{

};

void Enemy::CommandSelect()
{
	std::mt19937 mt{ std::random_device{}() };
	std::uniform_int_distribution<int> rand(1,3);
	MoveSelect = rand(mt);

	switch (MoveSelect)
	{
	case 1:
		std::cout << "敵の攻撃" << std::endl;
		break;
	case 2:
		std::cout << "敵は防御している" << std::endl;
		break;
	case 3:
		std::cout << "ぼーっとしている" << std::endl;
		break;
	}

};