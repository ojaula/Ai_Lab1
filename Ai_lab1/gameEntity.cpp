#include "gameEntity.h"


GameEntity::GameEntity(unsigned int id)
{
	this->id = id;
}

GameEntity::~GameEntity()
{
}	



void GameEntity::msg_recive()
{
	std::cout << "got message" << std::endl;
}
void GameEntity::msg_send()
{
	std::cout << "send message" << std::endl;
}
