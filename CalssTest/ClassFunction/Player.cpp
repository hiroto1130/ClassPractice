#include<stdio.h>
#include<iostream>

#include"Player.h"

void Player::CommandSelect()
{
	std::cout << "コマンドを選択してください" << std::endl;
	std::cout << "攻撃:1 防御:2 " << std::endl;

	std::cin >> MoveSelect;


}