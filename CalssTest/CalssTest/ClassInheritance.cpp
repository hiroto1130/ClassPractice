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

int Enemy::GetHp()
{
	return HP;
}

int Enemy::GetMp()
{
	return MP;
}

void Enemy::SetHp(int hp)
{
	HP = hp;
}

void Enemy::SetMp(int mp)
{
	MP = mp;
}

void Enemy::ShowHp()
{
	std::cout << HP << std::endl;
}

void Enemy::ShoeMp()
{
	std::cout << MP << std::endl;
}

EnemyTwo::EnemyTwo()
{
	std::cout << "EnemyTwo" << std::endl;
}

EnemyTwo::~EnemyTwo()
{
	std::cout << "~EnemyTwo" << std::endl;
}

int EnemyTwo::GetAt()
{
	return AT;
}

void EnemyTwo::SetAt(int at)
{
	AT = at;
}

void EnemyTwo::ShowAt()
{
	std::cout << AT << std::endl;
}