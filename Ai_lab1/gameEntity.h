#pragma once
#include "msgParticipant.h"
class GameEntity :public MsgParticipant
{
private:
	int id;

public:
	void msg_recive();
	void msg_send();

	GameEntity(unsigned int id);
	~GameEntity();
};

