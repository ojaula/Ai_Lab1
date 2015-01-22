#pragma once
#include "gameEntity.h"
#include "singleton.h"

#include <map>
class GameEntityManager : public Singleton<GameEntityManager>
{
private:
	// id counter for generating unique ids for entities.
	static int unsigned idCounter;
	// store all entities by id
	typedef std::map<int, GameEntity*> EntityMap;
	EntityMap Entities;

public:
	GameEntityManager();
	~GameEntityManager();

	GameEntity* createEntity();
	GameEntity* getEntityById(unsigned int id);
	void deleteEntityById(unsigned int id);
	
	
};
//create signleton shortcut
#define ENTITY_MANAGER GameEntityManager::get_instance()

