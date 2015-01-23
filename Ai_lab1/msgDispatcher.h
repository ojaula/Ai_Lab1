#pragma once
#include "Singleton.h"
#include<iostream>
#include<string>
#include<set>
#include "msg.h" 
class MsgDispatcher : public Singleton<MsgDispatcher>
{

private: 

	//set for storing messages by time to deliver. 
	//used by dispatcher to send messages with delayed time. 
	std::set<Msg> StoredMessages;

public:
	MsgDispatcher();
	~MsgDispatcher();
	void print_msg(){ std::cout << "works!"; }
};

//create signleton shortcut
#define MSG_DISPATCHER  MsgDispatcher::get_instance()