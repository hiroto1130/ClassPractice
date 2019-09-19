#include<iostream>
// #include<fstream>

#include"ClassInheritance.h"

Enemy::Enemy()
{
	std::cout << "Enemy" << std::endl;

}

Enemy::~Enemy()
{
	std::cout << "~Enemy" << std::endl;
}

EnemyTwo::EnemyTwo()
{
	std::cout << "EnemyTwo" << std::endl;
}

EnemyTwo::~EnemyTwo()
{
	std::cout << "~EnemyTwo" << std::endl;
}
