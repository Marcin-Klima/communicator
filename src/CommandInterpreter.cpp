//
// Created by waxta on 28.08.2020.
//

#include "CommandInterpreter.h"

void CommandInterpreter::Interpret(const std::string & command )
{
	std::string commandFunction = command.substr( 0, command.find_first_of( " \0" ));
	std::string arguments = command.substr(commandFunction.length(), commandFunction.find_first_of(" \0", commandFunction.length()));

	if ( commandFunction == "/exit" )
	{
//		system.exit(0);
	}
}

CommandInterpreter::CommandInterpreter()
{}
