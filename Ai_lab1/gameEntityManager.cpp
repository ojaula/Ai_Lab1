#include "gameEntityManager.h"


GameEntityManager::GameEntityManager()
{
}


GameEntityManager::~GameEntityManager()
{
}

int unsigned GameEntityManager::idCounter = 0;

GameEntity* GameEntityManager::createEntity()
{
	//create new entity with unique id
	GameEntity* ge = new GameEntity(this->idCounter);

	//step id counter for uniqueness
	this->idCounter += 1;

	//store and return enity
	this->Entities[this->idCounter] = ge;
	return ge;
}
GameEntity* GameEntityManager::getEntityById(unsigned int id)
{
	return this->Entities[id];
}
void GameEntityManager::deleteEntityById(unsigned int id)
{

}