#include"Enemy.h"
#include"Player.h"

int main()
{
	Player* player = new Player;
	Enemy* enemy = new Enemy;

	player->CommandSelect();
	enemy->CommandSelect();

	delete player;
	delete enemy;
}