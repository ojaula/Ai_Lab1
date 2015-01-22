
#include <iostream>
#include<string>

#include "singleton.h"
#include "msg_dispatcher.h"

int main(int argc, const char* argv[])
{
	msg_dispatcher* disp = Singelton<msg_dispatcher>get_instance();

	std::string inpt;
	std::cin>>inpt;
}