#include<iostream>

#include"Slime.h"

Slime::Slime()
{
	AT = 2;
	HP = 100;
	MP = 50;
	std::cout << "Slime" << std::endl;
}

Slime::~Slime()
{
	AT = 0;
	HP = 0;
	MP = 0;
	std::cout << "~Slime" << std::endl;
}

int Slime::GetAt()
{
	return AT;
}

void Slime::SetAt(int at)
{
	AT = at;
}

void Slime::ShowAt()
{
	std::cout << AT << std::endl;
}