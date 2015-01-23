
struct Msg
{
	//Id of sender from GameEntity
	int Sender;

	//Id of reciver from GameEntity
	int Receiver;

	//the message itself. These are all enumerated in the file
	//"MessageTypes.h"
	int msgType;

	//messages can be dispatched immediately or delayed for a specified amount
	//of time. 
	//set time 0 -> send now
	//set time to x-> delay message in milliseconds.
	double DispatchTime;

	//extra info to be casted by Msg type.
	void* ExtraInfo;
};

enum Msg_types
{
	HIT,
	TALK
};