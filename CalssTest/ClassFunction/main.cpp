#include"Enemy.h"
#include"Player.h"

int main()
{
	Player* player = new Player;

	player->CommandSelect();

	delete player;

}