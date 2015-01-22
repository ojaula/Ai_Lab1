#pragma once
#include<iostream>
class MsgParticipant
{
public:
	MsgParticipant();
	~MsgParticipant();
	virtual void msg_recive()=0;
	virtual void msg_send()=0;
};

